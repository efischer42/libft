/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_pushstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:44:09 by efischer          #+#    #+#             */
/*   Updated: 2019/10/29 16:14:25 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

static int	push(const char *str, t_vector *vct)
{
	char	*content;
	size_t	len;
	int		ret;

	ret = SUCCESS;
	len = ft_strlen(str);
	vct->len += len;
	if (vct->len + 1 > vct->size)
		ret = vct_resize(vct);
	if (ret == SUCCESS)
	{
		content = ft_strdup(vct->str);
		if (content == NULL)
			ret = FAILURE;
		else
		{
			vct->str = ft_memmove(vct->str, str, len);
			ret = vct_addstr(content, vct);
			ft_strdel(&content);
		}
	}
	return (ret);
}

int			vct_pushstr(const char *str, t_vector *vct)
{
	int		ret;

	ret = SUCCESS;
	if (vct == NULL)
		ret = FAILURE;
	else
		ret = push(str, vct);
	return (ret);
}
