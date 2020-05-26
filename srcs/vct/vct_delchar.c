/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_delchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:25:03 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 14:25:04 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_delchar(t_vector *vct, size_t pos)
{
	if (vct != NULL && pos <= vct->len)
	{
		ft_memmove(vct->str + pos, vct->str + pos + 1, vct->len - pos);
		vct->len--;
	}
}
