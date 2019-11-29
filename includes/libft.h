/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:32:07 by efischer          #+#    #+#             */
/*   Updated: 2019/10/26 13:52:09 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>
# include "libstruct.h"
# include "ft_printf.h"
# include "list.h"
# include "memory.h"
# include "nbr.h"
# include "print.h"
# include "is_str.h"
# include "analyse_str.h"
# include "process_str.h"
# include "free.h"
# include "sort.h"
# include "tab.h"
# include "token.h"
# include "vctlib.h"

# define BUF_SIZE	32
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define FAILURE	-1
# define FILEL ((t_file *)(list->content))
# define T_FILEL ((t_file *)(tmp->content))

#endif
