/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:36:12 by efischer          #+#    #+#             */
/*   Updated: 2019/10/10 14:43:00 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dblstadd(t_dblist **alst, t_dblist *new)
{
	if (alst == NULL || new == NULL)
		return ;
	new->next = *alst;
	(*alst)->prev = new;
	*alst = new;
}
