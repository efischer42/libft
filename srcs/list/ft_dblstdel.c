/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:52:23 by efischer          #+#    #+#             */
/*   Updated: 2019/10/10 14:57:15 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dblstdel(t_dblist **alst, void (*del)(void*, size_t))
{
	t_dblist	*tmp;

	if (alst == NULL || del == NULL)
		return ;
	while (*alst != NULL)
	{
		tmp = *alst;
		if ((*alst)->content != NULL)
			del((*alst)->content, (*alst)->content_size);
		*alst = tmp->next;
		free(tmp);
		tmp = NULL;
	}
}
