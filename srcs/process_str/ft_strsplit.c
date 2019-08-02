/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:26:14 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:17 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_tab(char **tab, char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	size_t			len;

	j = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			i = 0;
			len = 0;
			while (s[len] != c && s[len] != '\0')
				len++;
			if (!(tab[j] = (char *)malloc(sizeof(char) * (len + 1))))
			{
				tab = NULL;
				return ;
			}
			while (i < len)
				tab[j][i++] = *s++;
			tab[j++][i] = '\0';
		}
		else
			s++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	char			**tab;

	i = 0;
	count = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	ft_fill_tab(tab, s, c);
	tab[count] = 0;
	return (tab);
}
