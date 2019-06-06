/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:25:49 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:25:50 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	if (!s || !*s)
		return (NULL);
	if (!(cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (*s)
		cpy[i++] = f(*s++);
	cpy[i] = '\0';
	return (cpy);
}
