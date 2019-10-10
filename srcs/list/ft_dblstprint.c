/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:10:17 by efischer          #+#    #+#             */
/*   Updated: 2019/10/10 16:38:32 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*get_str_to_print(ssize_t *len, t_dblist *dblst,
			void (*f)(t_dblist*, t_dblist**))
{
	t_dblist	*elem;
	void		*str;
	void		*tmp;

	str = NULL;
	while (dblst != NULL)
	{
		tmp = str;
		f(dblst, &elem);
		if (elem == NULL)
			break ;
		str = ft_memjoin(tmp, elem->content, *len, elem->content_size);
		*len += elem->content_size;
		free(tmp);
		ft_strdel((char**)&elem->content);
		free(elem);
		dblst = dblst->next;
	}
	return (str);
}

int			ft_dblstprint(t_dblist *dblst, void (*f)(t_dblist*, t_dblist**))
{
	void	*str;
	ssize_t	len;

	len = 0;
	if (dblst == NULL)
		return (SUCCESS);
	if (f == NULL)
		return (FAILURE);
	str = get_str_to_print(&len, dblst, f);
	if (write(1, str, len) == FAILURE)
		len = FAILURE;
	free(str);
	return (len);
}
