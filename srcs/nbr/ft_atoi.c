/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:23:07 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:11 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	i;
	int				nbr;

	i = 0;
	nbr = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		nbr = str[i++] - '0' + nbr * 10;
	return (str[0] == '-' ? -nbr : nbr);
}
