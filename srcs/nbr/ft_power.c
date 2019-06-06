/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:23:53 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:55 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nbr, int pow)
{
	long	res;

	res = 1;
	if (pow == 0)
		return (0);
	while (pow)
	{
		if (res * nbr > 2147483647)
			return (0);
		res *= nbr;
		pow--;
	}
	return ((int)res);
}
