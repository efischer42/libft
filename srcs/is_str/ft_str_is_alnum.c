/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:11:53 by efischer          #+#    #+#             */
/*   Updated: 2019/07/18 15:15:39 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alnum(const char *str)
{
	while (*str != '\0')
		if (ft_isalnum(*str++) == FALSE)
			return (FALSE);
	return (TRUE);
}
