/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:24:10 by efischer          #+#    #+#             */
/*   Updated: 2019/08/05 14:32:41 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_memjoin_free(t_out *t1, t_tmp *t2)
{
	void	*tmp;

	tmp = t1->str;
	t1->str = ft_memjoin(tmp, t2->str, t1->len, t2->len);
	free(tmp);
	free(t2->str);
	t1->len += t2->len;
}

static void		ft_check_return(t_out *out, t_tmp *tmp, t_flag *flag)
{
	if (flag->exit)
	{
		write(1, out->str, out->len);
		out->len = -1;
		return ;
	}
	tmp->str = ft_strdup("(null)");
	tmp->len = 6;
}

static void		ft_get_flags(va_list *arg, t_out *out, t_tmp *tmp, char **str)
{
	char	*format;
	t_flag	flag;

	while ((format = ft_strchr(*str, '%')))
	{
		ft_init_flag(&flag);
		tmp->str = ft_strsub(*str, 0, format - *str);
		tmp->len = ft_strlen(tmp->str);
		ft_memjoin_free(out, tmp);
		*str = format;
		if (!(tmp->str = ft_process_flag(str, arg, &flag)))
		{
			ft_check_return(out, tmp, &flag);
			if (out->len == -1)
				return ;
		}
		tmp->len = ft_strlen(tmp->str);
		if (flag.null && flag.min && flag.width)
			tmp->len += flag.width;
		else if (flag.null)
			tmp->len++;
		ft_memjoin_free(out, tmp);
		if (**str)
			(*str)++;
	}
}

static void		ft_get_out(va_list *arg, t_out *out, char *str)
{
	t_tmp	*tmp;
	char	*format;
	t_flag	flag;

	out->str = NULL;
	if (!(tmp = (t_tmp*)malloc(sizeof(t_tmp))))
		return ;
	ft_get_flags(arg, out, tmp, &str);
	free(tmp);
	if (out->len < 0)
		return ;
	if (*str)
	{
		ft_init_flag(&flag);
		format = out->str;
		out->str = ft_memjoin(out->str, str, out->len, ft_strlen(str));
		out->len += ft_strlen(str);
		free(format);
	}
}

static int		process_format(t_out *out, ssize_t len, int fd)
{
	len = out->len;
	if (len != -1)
	{
		if (write(fd, out->str, out->len) == FAILURE)
		{
			free(out->str);
			free(out);
			return (FAILURE);
		}
	}
	free(out->str);
	return (SUCCESS);
}

int				ft_dprintf(int fd, const char *format, ...)
{
	va_list	arg;
	t_out	*out;
	ssize_t	len;

	if (!format)
		return (0);
	if (!(out = (t_out*)malloc(sizeof(t_out))))
		return (-1);
	out->len = 0;
	len = ft_strlen(format);
	if (ft_strchr(format, '%'))
	{
		va_start(arg, format);
		ft_get_out(&arg, out, (char*)format);
		va_end(arg);
		if (process_format(out, len, fd) == FAILURE)
			return (FAILURE);
		free(out);
		return (len);
	}
	if (write(fd, format, len) == FAILURE)
		len = FAILURE;
	free(out);
	return (len);
}
