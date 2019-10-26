/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 12:12:34 by efischer          #+#    #+#             */
/*   Updated: 2019/10/26 14:10:11 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

t_vector	*vct_new(char *str)
{
	t_vector	*vct;
	size_t		overflow;
	size_t		align;

	vct = (t_vector*)malloc(sizeof(t_vector));
	if (vct == NULL)
		return (vct);
	vct->len = ft_strlen(str);
	vct->size = DFL_SIZE;
	vct->scale = DFL_SCALE;
	if (vct->len > vct->size)
	{
		overflow = vct->len - vct->size;
		align = overflow - overflow % DFL_SCALE;
		vct->scale = 2 * align;
		vct->size += vct->scale;
	}
	vct->str = (char*)malloc(sizeof(char) * vct->size);
	if (vct->str != NULL)
	{
		vct->str = (char*)ft_memcpy(vct->str, str, vct->len);
		vct->str[vct->len] = '\0';
	}
	return (vct);
}
