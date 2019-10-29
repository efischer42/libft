/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_resize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:23:20 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 13:47:35 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"vctlib.h"

void	vct_resize(t_vector	*vct)
{
	size_t		overflow;
	size_t		align;
	char		*content;
	size_t		len;

	overflow = vct->len - vct->size;
	align = overflow - overflow % DFL_SCALE;
	vct->scale = 2 * align;
	vct->size += vct->scale;
	content = ft_strdup(vct->str);
	len = ft_strlen(content);
	ft_strdel(&(vct->str));
	vct->str = (char*)malloc(sizeof(char) * vct->size);
	ft_bzero(vct->str, vct->size);
	if (vct->str != NULL)
	{
		vct->str = (char*)ft_memcpy(vct->str, content, len);
		vct->str[vct->len] = '\0';
	}
	ft_strdel(&content);
}
