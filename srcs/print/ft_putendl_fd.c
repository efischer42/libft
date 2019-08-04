/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:24:28 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:24:30 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl_fd(char const *s, int fd)
{
	size_t	len;
	char	*tmp;

	if (s == NULL)
		return (SUCCESS);
	tmp = ft_strjoin(s, "\n");
	len = ft_strlen(tmp);
	if (write(fd, tmp, len) == FAILURE)
	{
		ft_strdel(&tmp);
		return (FAILURE);
	}
	ft_strdel(&tmp);
	return (len);
}
