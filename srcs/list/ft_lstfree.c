/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:44 by efischer          #+#    #+#             */
/*   Updated: 2019/06/18 14:40:42 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list *lst, void (*f)(void*, size_t))
{
	if (lst == NULL)
		return ;
	f(lst->content, lst->content_size);
	ft_lstfree(lst->next, f);
	free(lst);
}
