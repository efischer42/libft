/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:23:36 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:38 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(long long n)
{
	unsigned int	len;
	char			*str;

	if (n < -9223372036854775807)
		return (ft_strdup("-9223372036854775808"));
	len = ft_intlen(n, 10);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[len] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
