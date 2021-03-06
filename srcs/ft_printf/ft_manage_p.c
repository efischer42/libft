/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:18:54 by efischer          #+#    #+#             */
/*   Updated: 2019/06/06 15:18:57 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_manage_p(va_list *arg, t_flag *flag)
{
	void	*p;
	char	*s;
	char	*tmp;

	p = va_arg(*arg, void*);
	if (flag->precision == 0)
		s = ft_strdup("");
	else
		s = ft_itoa_base_u((unsigned long)p, 16);
	if (flag->precision)
		s = ft_precision('p', s, flag);
	s = ft_join_free("0x", s, 2);
	if (flag->width)
		s = ft_width('p', s, flag);
	tmp = s;
	s = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (s);
}
