/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_reset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:26:38 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 14:34:15 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"vctlib.h"

void	vct_reset(t_vector *vct)
{
	ft_strdel(&vct->str);
	vct->len = 0;
	vct->size = DFL_SIZE;
	vct->scale = DFL_SCALE;
	vct->str = (char*)malloc(sizeof(char) * vct->size);
	ft_bzero(vct->str, vct->size);
}
