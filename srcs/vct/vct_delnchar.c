/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_delnchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:22:55 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 14:22:58 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_delnchar(t_vector *vct, size_t pos, size_t n)
{
	if (vct != NULL && pos <= vct->len)
	{
		ft_memmove(vct->str + pos, vct->str + pos + n, vct->len - pos - n);
		vct->len -= n;
	}
}
