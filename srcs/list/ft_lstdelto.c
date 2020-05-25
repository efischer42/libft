#include "libft.h"

void	ft_lstdelto(t_list **alst, t_list *new_head,
			void (*del)(void*, size_t))
{
	t_list	*tmp;

	if (*alst != NULL && del != NULL)
	{
		while (*alst != NULL && *alst != new_head)
		{
			tmp = *alst;
			if ((*alst)->content)
				del((*alst)->content, (*alst)->content_size);
			*alst = tmp->next;
			free(tmp);
			tmp = NULL;
		}
	}
}
