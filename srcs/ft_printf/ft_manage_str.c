/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:18:59 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:19:02 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_manage_c(va_list *arg, t_flag *flag)
{
	char	*s;
	char	c;

	c = va_arg(*arg, unsigned int);
	s = ft_strndup(&c, 1);
	if (!s[0])
	{
		flag->null = 1;
		if (!flag->min)
			flag->width--;
	}
	if (flag->width >= 1)
		s = ft_width('c', s, flag);
	return (s);
}

char			*ft_manage_s(va_list *arg, t_flag *flag)
{
	char	*s;

	if (!(s = va_arg(*arg, char*)))
		s = ft_strdup("(null)");
	else
		s = ft_strdup(s);
	if (flag->precision >= 0)
		s = ft_precision('s', s, flag);
	if (flag->width)
		s = ft_width('s', s, flag);
	return (s);
}
