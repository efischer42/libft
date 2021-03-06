/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstruct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:52:54 by efischer          #+#    #+#             */
/*   Updated: 2019/10/10 14:25:06 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTRUCT_H
# define LIBSTRUCT_H

# include "libft.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_dblist
{
	void			*content;
	size_t			content_size;
	struct s_dblist	*prev;
	struct s_dblist	*next;
}					t_dblist;

typedef struct		s_file
{
	char			*rest;
	char			*cur;
	int				fd;
	char			pad[4];
}					t_file;

#endif
