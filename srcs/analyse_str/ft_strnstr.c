/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:17:47 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:34:55 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "analyse_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	char			*tmp;
	size_t			n;

	tmp = (char *)haystack;
	if (!*needle)
		return (tmp);
	while (*tmp && len)
	{
		i = 0;
		n = len;
		if (*tmp == needle[i])
		{
			while (tmp[i] == needle[i] && n && needle[i])
			{
				i++;
				n--;
			}
			if (!needle[i])
				return (tmp);
		}
		tmp++;
		len--;
	}
	return (0);
}
