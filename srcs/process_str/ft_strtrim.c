/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:26:25 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:26 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*cpy;
	size_t			len;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s)
		s++;
	if (!(len = ft_strlen(s)))
		len = 1;
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			&& len)
		len--;
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
