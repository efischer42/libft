/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:08:46 by efischer          #+#    #+#             */
/*   Updated: 2019/07/12 15:13:41 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

size_t	ft_tablen(char **tab)
{
	size_t	count;

	count = 0;
	if (tab == NULL)
		return (0);
	while (tab[count])
		count++;
	return (count);
}
