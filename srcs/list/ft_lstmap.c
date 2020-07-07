/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:51 by efischer          #+#    #+#             */
/*   Updated: 2020/07/07 12:13:09 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_lst;
	t_list	*lst_new;

	if (lst == NULL || f == NULL)
		return (NULL);
	map_lst = NULL;
	while (lst != NULL)
	{
		lst_new = ft_lstnew(f(lst), sizeof(*lst));
		if (lst_new == NULL)
		{
			ft_lstdel(&map_lst, del);
			return (NULL);
		}
		ft_lstaddend(&map_lst, lst_new);
		lst = lst->next;
	}
	return (map_lst);
}
