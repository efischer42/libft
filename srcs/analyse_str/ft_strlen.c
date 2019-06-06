/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:17:21 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:34:20 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "analyse_str.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s == NULL)
		return (0);
	while (s[len])
		len++;
	return (len);
}
