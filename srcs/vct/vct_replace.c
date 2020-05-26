/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_replace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:23:29 by efischer          #+#    #+#             */
/*   Updated: 2020/05/26 14:23:30 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vctlib.h"

int		vct_replace(t_vector *vct, char *occurence, char *replace)
{
	size_t	pos;
	size_t	len;
	char	*tmp;
	int		ret;

	ret = SUCCESS;
	if (vct != NULL && occurence != NULL && replace != NULL)
	{
		tmp = ft_strstr(vct->str, occurence);
		if (tmp != vct->str)
		{
			pos = tmp - vct->str;
			len = ft_strlen(occurence);
			vct_delnchar(vct, pos, len);
			ret = vct_insertstr(replace, pos, vct);
		}
	}
	return (ret);
}
