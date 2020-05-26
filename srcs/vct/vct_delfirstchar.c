/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_delfirstchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:24:15 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 14:24:16 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_delfirstchar(t_vector *vct)
{
	if (vct != NULL)
	{
		ft_memmove(vct->str, vct->str + 1, vct->len);
		vct->len--;
	}
}
