/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:51:17 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 15:08:57 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_init_list(const int fd)
{
	t_file	*file;
	t_list	*list;

	if (!(file = (t_file*)malloc(sizeof(t_file))))
		return (NULL);
	file->rest = NULL;
	file->cur = NULL;
	file->fd = fd;
	if (!(list = ft_lstnew(file, sizeof(t_file))))
	{
		free(file);
		file = NULL;
		return (NULL);
	}
	free(file);
	file = NULL;
	return (list);
}

static int		ft_rest(t_file *file, char **line)
{
	char	*tmp;
	char	*tmp_rest;

	if (file->rest)
	{
		if ((tmp = ft_strchr(file->rest, '\n')))
		{
			tmp_rest = file->rest;
			*line = ft_strsub(file->rest, 0, tmp - file->rest);
			file->rest = ft_strdup(tmp + 1);
			ft_strdel(&tmp_rest);
			if (*(file->rest) == '\0')
				ft_strdel(&file->rest);
			return (1);
		}
		else
			file->cur = ft_strdup(file->rest);
		ft_strdel(&file->rest);
	}
	return (0);
}

static int		ft_read(t_file *file, char **line)
{
	char	*tmp;
	char	*tmp_rest;
	char	buf[BUF_SIZE + 1];
	int		ret;

	while ((ret = read(file->fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if ((tmp_rest = ft_strchr(buf, '\n')))
		{
			tmp = ft_strsub(buf, 0, tmp_rest - buf);
			*line = ft_join_free(file->cur, tmp, 3);
			file->rest = ft_strdup(tmp_rest + 1);
			return (1);
		}
		else
		{
			tmp = file->cur;
			file->cur = ft_strjoin(file->cur, buf);
			ft_strdel(&tmp);
		}
	}
	return (ret);
}

static int		get_line(t_list *tmp, char **line)
{
	int				ret;

	if ((ft_rest(((t_file*)(tmp->content)), line)) == 1
		|| (ret = ft_read(((t_file*)(tmp->content)), line)) == 1)
	{
		return (1);
	}
	if (((t_file*)(tmp->content))->cur && *(((t_file*)(tmp->content))->cur))
	{
		*line = ft_strdup(((t_file*)(tmp->content))->cur);
		ft_strdel(&((t_file*)(tmp->content))->cur);
		return (1);
	}
	return (ret);
}

int				get_next_line_fd(const int fd, char **line)
{
	static t_list	*list;
	t_list			*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (list == NULL)
		list = ft_init_list(fd);
	tmp = list;
	while (tmp && ((t_file*)(tmp->content))->fd != fd)
	{
		if (tmp->next == NULL)
			tmp->next = ft_init_list(fd);
		else
			tmp = tmp->next;
	}
	return (get_line(tmp, line));
}
