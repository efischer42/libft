/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_pushstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:44:09 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 15:05:17 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

void	vct_pushstr(const char *str, t_vector *vct)
{
	size_t	len;
	char	*content;

	if (vct == NULL)
		return ;
	len = ft_strlen(str);
	vct->len += len;
	if (vct->len + 1 > vct->size)
		vct_resize(vct);
	content = ft_strdup(vct->str);
	vct->str = ft_memmove(vct->str, str, len);
	vct_addstr(content, vct);
	ft_strdel(&content);
}
