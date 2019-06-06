/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:25:57 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:25:58 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2 && n)
	{
		s1[i++] = *s2++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
