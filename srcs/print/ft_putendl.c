/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:24:24 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:24:26 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl(char const *s)
{
	size_t	len;
	char	*tmp;

	if (s == NULL)
		return (SUCCESS);
	tmp = ft_strjoin(s, "\n");
	len = ft_strlen(tmp);
	if (write(1, tmp, len) == FAILURE)
	{
		ft_strdel(&tmp);
		return (FAILURE);
	}
	ft_strdel(&tmp);
	return (len);
}
