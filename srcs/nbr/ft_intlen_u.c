/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:23:32 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:34 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen_u(unsigned long long nb, int base)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= base;
		i++;
	}
	return (i);
}
