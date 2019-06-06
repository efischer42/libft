/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:26:19 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:23 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*part;

	i = 0;
	if (!s || !*s)
		return (NULL);
	if (!(part = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
		part[i++] = s[start++];
	part[i] = '\0';
	return (part);
}
