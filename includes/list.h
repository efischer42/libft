/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:15:24 by efischer          #+#    #+#             */
/*   Updated: 2019/10/11 13:09:43 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new);
void		ft_dblstadd(t_dblist **alst, t_dblist *new);
void		ft_lstaddend(t_list **alst, t_list *new);
void		ft_dblstaddend(t_dblist **alst, t_dblist *new);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_dblstdel(t_dblist **alst, void (*del)(void*, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_dblstdelone(t_dblist **alst, void (*del)(void*, size_t));
void		ft_lstdelto(t_list **alst, t_list *new_head,
				void (*del)(void*, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t		ft_lstlen(t_list *lst);
size_t		ft_dblstlen(t_dblist *dblst);
t_list		*ft_lstnew(void const *content, size_t content_size);
t_list		*ft_lstnewnomalloc(void *content, size_t content_size);
t_dblist	*ft_dblstnew(void const *content, size_t content_size);
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew_str(char const *content, size_t content_size);
int			ft_lstprint(t_list *lst, void (*f)(t_list*, t_list**));
int			ft_dblstprint(t_dblist *dblst, void (*f)(t_dblist*, t_dblist**));
char		**ft_lst_to_char_tab(t_list *lst, char *(*f)(t_list *));
char		**ft_dblst_to_char_tab(t_dblist *dblst, char *(*f)(t_dblist*));
t_list		*ft_lstcpy(t_list *lst, t_list *(*f)(t_list*));

#endif
