/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:23:57 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:23:59 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_matrix(int **matrix, unsigned int x, unsigned int y)
{
	unsigned int	i;
	unsigned int	j;

	if (!matrix)
		return ;
	j = 0;
	while (j < y && matrix[j])
	{
		i = 0;
		while (i < x && matrix[j][i])
		{
			ft_putnbr(matrix[j][i++]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
		j++;
	}
}
