/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:18:02 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:35:36 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void		ft_free_content(void *content, size_t content_size)
{
	(void)content_size;
	ft_strdel((char**)&content);
}
