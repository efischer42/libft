/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:41:24 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:02 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nbr.h"

unsigned long	ft_abs(int long nb)
{
	if (nb < 0)
		return ((unsigned long)(nb * -1));
	else
		return ((unsigned long)nb);
}
