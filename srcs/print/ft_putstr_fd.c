/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:24:46 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:24:47 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd(const char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return (SUCCESS);
	len = ft_strlen(s);
	if (write(fd, s, len) == FAILURE)
		return (FAILURE);
	return (len);
}
