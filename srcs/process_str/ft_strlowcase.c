/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:25:45 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:25:46 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		str[i] = (char)ft_tolower(str[i]);
		i++;
	}
	return (str);
}
