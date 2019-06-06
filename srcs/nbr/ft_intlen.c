/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:23:26 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:30 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(long long nb, int base)
{
	size_t	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	else if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= base;
		i++;
	}
	return (i);
}
