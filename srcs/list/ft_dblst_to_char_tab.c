/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblst_to_char_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:59:59 by efischer          #+#    #+#             */
/*   Updated: 2019/10/11 13:09:34 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

char	**ft_dblst_to_char_tab(t_dblist *dblst, char *(*f)(t_dblist*))
{
	char	**tab;
	char	*tmp;
	size_t	len;
	size_t	i;

	if (dblst == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_dblstlen(dblst);
	tab = (char**)malloc(sizeof(char*) * (len + 1));
	if (tab == NULL)
		return (NULL);
	while (dblst != NULL)
	{
		tmp = f(lst);
		tab[i] = ft_strdup(tmp);
		lst = lst->next;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
