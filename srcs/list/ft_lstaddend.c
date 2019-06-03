#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst || !new)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	tmp = *alst;
	while ((*alst)->next != NULL)
		*alst = (*alst)->next;
	(*alst)->next = new;
	*alst = tmp;
}
