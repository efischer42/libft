/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:22:26 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:22:30 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp_dst;
	unsigned const char	*tmp_src;
	unsigned char		stop;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned const char *)src;
	stop = (unsigned char)c;
	while (n)
	{
		*tmp_dst = *tmp_src;
		if ((unsigned char)*tmp_src == stop)
			return (++tmp_dst);
		tmp_dst++;
		tmp_src++;
		n--;
	}
	return (NULL);
}
