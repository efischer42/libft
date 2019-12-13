#include "vctlib.h"

static int	insert(const char c, const size_t pos, t_vector *vct)
{
	char	*first_part;
	char	*last_part;
	int		ret;

	ret = SUCCESS;
	if (vct->len + 1 > vct->size)
		ret = vct_resize(vct);
	if (ret == SUCCESS)
	{
		first_part = ft_strndup(vct->str, pos);
		last_part = ft_strdup(vct->str + pos);
		if (first_part == NULL || last_part == NULL)
			ret = FAILURE;
		else
		{
			vct_clear(vct);
			vct->str = ft_strcpy(vct->str, first_part);
			vct->str[pos] = c;
			vct->str = ft_strcat(vct->str, last_part);
			ft_strdel(&first_part);
			ft_strdel(&last_part);
		}
	}
	return (ret);
}

int			vct_insertchar(const char c, const size_t pos, t_vector *vct)
{
	int		ret;

	ret = SUCCESS;
	if (vct == NULL)
		ret = FAILURE;
	else
		ret = insert(c, pos, vct);
	return (ret);
}
