/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstaddend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:45:53 by efischer          #+#    #+#             */
/*   Updated: 2019/10/10 15:08:34 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dblstaddend(t_dblist **alst, t_dblist *new)
{
	t_dblist	*tmp;

	if (alst == NULL || new == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	tmp = *alst;
	while ((*alst)->next != NULL)
		*alst = (*alst)->next;
	(*alst)->next = new;
	new->prev = *alst;
	*alst = tmp;
}
