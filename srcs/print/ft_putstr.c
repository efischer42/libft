/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:24:41 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:24:42 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr(char const *s)
{
	size_t	len;

	if (s == NULL)
		return (SUCCESS);
	len = ft_strlen(s);
	if (write(1, s, len) == FAILURE)
		return (FAILURE);
	return (len);
}
