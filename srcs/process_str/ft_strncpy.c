/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:26:01 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:02 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (src[i] && len)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	while (len)
	{
		dest[i++] = '\0';
		len--;
	}
	return (dest);
}
