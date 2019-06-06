/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:16:47 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:33:25 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "analyse_str.h"

int		ft_strcasecmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	i = 0;
	while (ft_tolower(tmp_s1[i]) == ft_tolower(tmp_s2[i]))
	{
		if (!tmp_s1[i] || !tmp_s2[i])
			return (0);
		i++;
	}
	return ((unsigned char)tmp_s1[i] - (unsigned char)tmp_s2[i]);
}
