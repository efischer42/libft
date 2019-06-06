/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:17:56 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:35:13 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "analyse_str.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	char			*tmp;

	tmp = (char *)haystack;
	if (!*needle)
		return (tmp);
	while (*tmp)
	{
		if (*tmp == needle[0])
		{
			i = 0;
			while (tmp[i] == needle[i] && tmp[i] && needle[i])
				i++;
			if (!needle[i])
				return (tmp);
		}
		tmp++;
	}
	return (0);
}
