/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:14:39 by efischer          #+#    #+#             */
/*   Updated: 2019/08/05 13:49:38 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_STR_H
# define IS_STR_H

# include "libft.h"

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_str_is_alpha(const char *str);
int		ft_str_is_alnum(const char *str);
int		ft_str_is_blank(const char *str);
int		ft_str_is_lowercase(const char *str);
int		ft_str_is_numeric(const char *str);
int		ft_str_is_printable(const char *str);
int		ft_str_is_uppercase(const char *str);

#endif
