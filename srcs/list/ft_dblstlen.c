/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:30:01 by efischer          #+#    #+#             */
/*   Updated: 2019/10/11 11:35:02 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

size_t	ft_dblstlen(t_dblist *dblst)
{
	size_t	len;

	len = 0;
	while (dblst != NULL)
	{
		len++;
		dblst = dblst->next;
	}
	return (len);
}
