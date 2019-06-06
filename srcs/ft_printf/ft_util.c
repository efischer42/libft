/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:19:55 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:19:58 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strlen_null(char *s, int nb)
{
	int		count;

	count = 0;
	while (s[count] && nb)
	{
		if (!s[count])
			nb--;
		count++;
	}
	return (count);
}

int		ft_putstr_null(char *s, int nb)
{
	int		len;

	write(1, s, len = ft_strlen_null(s, nb));
	return (len);
}
