/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse_str.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:14:09 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:31:41 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANALYSE_STR_H
# define ANALYSE_STR_H

# include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcasecmp(const char *s1, const char *s2);
int		ft_strncasecmp(const char *s1, const char *s2, size_t n);
char	*ft_strcasestr(const char *haystack, const char *needle);

#endif
