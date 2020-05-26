/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_insertchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:24:31 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 14:24:32 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

static int	insert(const char c, const size_t pos, t_vector *vct)
{
	int		ret;

	ret = SUCCESS;
	if (vct->len + 1 > vct->size)
		ret = vct_resize(vct);
	if (ret == SUCCESS)
	{
		ft_memmove(vct->str + pos + 1, vct->str + pos, vct->len - pos);
		vct->str[pos] = c;
		vct->len++;
	}
	return (ret);
}

int			vct_insertchar(const char c, const size_t pos, t_vector *vct)
{
	int		ret;

	if (vct == NULL)
		ret = FAILURE;
	else
		ret = insert(c, pos, vct);
	return (ret);
}
