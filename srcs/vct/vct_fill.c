/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:31:17 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 13:44:36 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_fill(char *str, t_vector *vct)
{
	size_t	len;

	if (vct == NULL)
		return ;
	len = ft_strlen(str);
	str = ft_memjoin(vct->str, str, vct->len, len);
	vct->len += len;
	if (vct->len > vct->size)
		vct_resize(vct);
	vct->str = (char*)ft_memcpy(vct->str, str, vct->len);
	vct->str[vct->len] = '\0';
}
