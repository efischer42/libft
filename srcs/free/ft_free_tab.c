/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:18:08 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:35:51 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void	ft_free_tab(char **tmp)
{
	int		i;

	i = 0;
	if (!tmp || !*tmp)
		return ;
	while (tmp[i])
	{
		free(tmp[i]);
		tmp[i++] = NULL;
	}
	free(tmp);
	tmp = NULL;
}
