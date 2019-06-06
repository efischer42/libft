/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:24:01 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:24:02 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **tab)
{
	if (tab == NULL || *tab == NULL)
		return ;
	while (*tab != NULL)
		ft_putendl(*tab++);
}
