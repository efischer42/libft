/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vctlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 12:13:44 by efischer          #+#    #+#             */
/*   Updated: 2019/10/26 12:46:14 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VCTLIB_H
# define VCTLIB_H

# include "libft.h"

# define	DFL_SIZE 64
# define	DFL_SCALE 16

typedef struct	s_vector
{
	char	*str;
	size_t	len;
	size_t	size;
	size_t	scale;
}				t_vector;

t_vector	*vct_new(char *str);

#endif
