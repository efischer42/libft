/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_resize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:23:20 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 12:25:58 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"vctlib.h"

void	vct_resize(t_vector	*vct)
{
	size_t		overflow;
	size_t		align;

	overflow = vct->len - vct->size;
	align = overflow - overflow % DFL_SCALE;
	vct->scale = 2 * align;
	vct->size += vct->scale;
}
