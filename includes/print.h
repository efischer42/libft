/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:15:51 by efischer          #+#    #+#             */
/*   Updated: 2019/06/08 14:36:15 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "libft.h"

int		ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr(char const *s);
int		ft_putstr_fd(const char *s, int fd);
int		ft_putendl(char const *s);
int		ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_matrix(int **matrix, unsigned int x, unsigned int y);
void	ft_print_tab(char **tab);

#endif
