/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_addchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:02:28 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 15:17:03 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_addchar(const char c, t_vector *vct)
{
	if (vct == NULL)
		return ;
	if (vct->len + 1 > vct->size)
		vct_resize(vct);
	vct->str[vct->len] = c;
}
