/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:26:04 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:06 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*cpy;
	unsigned int	i;

	i = 0;
	if (!(cpy = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (n && s1[i])
	{
		cpy[i] = s1[i];
		i++;
		n--;
	}
	cpy[i] = '\0';
	return (cpy);
}
