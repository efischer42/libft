#include "libft.h"

void	ft_print_tab(char **tab)
{
	if (tab == NULL || *tab == NULL)
		return ;
	while (*tab != NULL)
		ft_putendl(*tab++);
}
