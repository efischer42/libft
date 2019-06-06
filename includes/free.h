/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:14:23 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:31:45 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_H
# define FREE_H

# include "libft.h"

void	ft_free_tab(char **tmp);
void	ft_free_content(void *content, size_t content_size);

#endif
