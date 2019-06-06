/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:22:41 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:22:43 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*tmp_dst;
	unsigned const char	*tmp_src;

	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned const char *)src;
	while (n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
		n--;
	}
	return (tmp_dst);
}
