/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:07:48 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 12:22:04 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"vctlib.h"

t_vector	*vct_new(void)
{
	t_vector	*vct;

	vct = (t_vector*)malloc(sizeof(t_vector));
	if (vct == NULL)
		return (NULL);
	vct->str = NULL;
	vct->len = 0;
	vct->size = DFL_SIZE;
	vct->scale = DFL_SCALE;
	return (vct);
}
