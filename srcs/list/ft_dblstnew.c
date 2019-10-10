/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:25:31 by efischer          #+#    #+#             */
/*   Updated: 2019/10/10 16:36:54 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dblist	*ft_dblstnew(void const *content, size_t content_size)
{
	t_dblist	*dblst;

	dblst = (t_dblist*)malloc(sizeof(t_dblist));
	if (dblst == NULL)
		return (NULL);
	if (content == NULL)
	{
		dblst->content = NULL;
		dblst->content_size = 0;
	}
	else
	{
		dblst->content = malloc(content_size);
		if (dblst->content == NULL)
		{
			free(dblst);
			return (NULL);
		}
		dblst->content = ft_memcpy(dblst->content, content, content_size);
		dblst->content_size = content_size;
	}
	dblst->prev = NULL;
	dblst->next = NULL;
	return (dblst);
}
