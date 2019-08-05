/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_blank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:47:27 by efischer          #+#    #+#             */
/*   Updated: 2019/08/05 13:48:01 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_blank(const char *str)
{
	while (*str != '\0')
		if (ft_isblank(*str++) == FALSE)
			return (FALSE);
	return (TRUE);
}
