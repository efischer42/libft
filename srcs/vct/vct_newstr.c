/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_newstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:06:54 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 12:58:16 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"vctlib.h"

t_vector	*vct_newstr(char *str)
{
	t_vector	*vct;

	vct = (t_vector*)malloc(sizeof(t_vector));
	if (vct == NULL)
		return (vct);
	vct->len = ft_strlen(str);
	vct->size = DFL_SIZE;
	vct->scale = DFL_SCALE;
	if (vct->len > vct->size)
		vct_resize(vct);
	else
		vct->str = (char*)malloc(sizeof(char) * vct->size);
	ft_bzero(vct->str, vct->size);
	if (vct->str != NULL)
	{
		vct->str = (char*)ft_memcpy(vct->str, str, vct->len);
		vct->str[vct->len] = '\0';
	}
	return (vct);
}
