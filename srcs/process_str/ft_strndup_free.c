/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:26:08 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:09 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup_free(char *s1, size_t n)
{
	char	*cpy;

	cpy = ft_strndup(s1, n);
	ft_strdel(&s1);
	return (cpy);
}
