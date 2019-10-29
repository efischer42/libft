/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_pushchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:19:53 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 15:24:43 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_pushchar(const char c, t_vector *vct)
{
	char	*content;

	if (vct == NULL)
		return ;
	if (vct->len + 1 > vct->size)
		vct_resize(vct);
	content = ft_strdup(vct->str);
	vct_clear(vct);
	vct->str[0] = c;
	vct->str = ft_strcat(vct->str, content);
	ft_strdel(&content);
}
