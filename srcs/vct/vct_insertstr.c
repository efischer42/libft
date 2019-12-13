#include "vctlib.h"

static int	insert(const char *str, const size_t pos, t_vector *vct)
{
	char	*first_part;
	char	*last_part;
	size_t	len;
	int		ret;

	ret = SUCCESS;
	len = ft_strlen(str);
	vct->len += len;
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
			vct->str = ft_strcat(vct->str, str);
			vct->str = ft_strcat(vct->str, last_part);
			ft_strdel(&first_part);
			ft_strdel(&last_part);
		}
	}
	return (ret);
}

int			vct_insertstr(const char *str, const size_t pos, t_vector *vct)
{
	int		ret;

	ret = SUCCESS;
	if (vct == NULL)
		ret = FAILURE;
	else
		ret = insert(str, pos, vct);
	return (ret);
}
