/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:22:03 by efischer          #+#    #+#             */
/*   Updated: 2019/06/18 14:17:14 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstprint(t_list *lst, void (*f)(t_list*, t_list**))
{
	void	*str;
	void	*tmp;
	t_list	*elem;
	size_t	len;

	len = 0;
	str = NULL;
	if (lst == NULL || f == NULL)
		return (FAILURE);
	while (lst != NULL)
	{
		tmp = str;
		f(lst, &elem);
		if (elem != NULL)
		{
			str = ft_memjoin(tmp, elem->content, len, elem->content_size);
			len += elem->content_size;
		}
		free(tmp);
		free(elem);
		lst = lst->next;
	}
	write(1, str, len);
	free(str);
	return (len);
}
