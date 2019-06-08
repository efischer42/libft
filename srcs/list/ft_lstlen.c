/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:01:30 by efischer          #+#    #+#             */
/*   Updated: 2019/06/08 14:02:24 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t	lstlen;

	lstlen = 0;
	while (lst != NULL)
	{
		lstlen++;
		lst = lst->next;
	}
	return (lstlen);
}
