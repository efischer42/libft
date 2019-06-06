/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:17:52 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:35:04 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "analyse_str.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (*s == c ? (char *)(s + len) : NULL);
}
