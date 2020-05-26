/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_insertstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:24:48 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 14:24:49 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

static int	insert(const char *str, const size_t pos, t_vector *vct)
{
	size_t	len;
	int		ret;

	ret = SUCCESS;
	len = ft_strlen(str);
	vct->len += len;
	if (vct->len + 1 > vct->size)
		ret = vct_resize(vct);
	if (ret == SUCCESS)
	{
		ft_memmove(vct->str + pos + len, vct->str + pos, vct->len - len);
		ft_memcpy(vct->str + pos, str, len);
	}
	return (ret);
}

int			vct_insertstr(const char *str, const size_t pos, t_vector *vct)
{
	int		ret;

	if (vct == NULL)
		ret = FAILURE;
	else
		ret = insert(str, pos, vct);
	return (ret);
}
