/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:11:03 by efischer          #+#    #+#             */
/*   Updated: 2019/11/19 12:54:43 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

# include "libft.h"

# define NB_TOKEN	10
# define TAB_END	-1 

enum	e_token
{
	START,
	END,
	NUM,
	PLUS,
	MIN,
	MUL,
	DIV,
	MOD,
	OP_BRA,
	CL_BRA,
	ERR
};

int		lexer(const char* str, t_list **lst);
int		do_op(t_list *lst);
int		parser(t_list *lst);

#endif
