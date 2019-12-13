/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_newstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:06:54 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 14:43:06 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"vctlib.h"

int		vct_newstr(t_vector *vct, const char *str)
{
	int		ret;

	ret = SUCCESS;
	vct->len = ft_strlen(str);
	vct->size = DFL_SIZE;
	vct->scale = DFL_SCALE;
	if (vct->len + 1 > vct->size)
		ret = vct_resize(vct);
	else
		vct->str = (char*)malloc(sizeof(char) * vct->size);
	if (ret == SUCCESS)
	{
		ft_bzero(vct->str, vct->size);
		if (vct->str != NULL)
			vct->str = (char*)ft_memmove(vct->str, str, vct->len);
		else
			ret = FAILURE;
	}
	return (ret);
}
