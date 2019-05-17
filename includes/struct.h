/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 16:57:47 by efischer          #+#    #+#             */
/*   Updated: 2019/05/17 12:09:11 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_file
{
	char			*rest;
	char			*cur;
	int				fd;
}					t_file;

typedef	struct		s_dir
{
	const char		*name;
	const char		*type;
	const char		*mode;
	const char		*uid;
	const char		*gid;
	char			time[13];
	long int		link;
	long long int	size;
}					t_dir;

#endif
