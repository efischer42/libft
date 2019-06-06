/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:15:33 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:32:27 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include "libft.h"

void	ft_bzero(void	*s, size_t	n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memjoin(void *s1, void *s2, size_t len1, size_t len2);

#endif
