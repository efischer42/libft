#include "vctlib.h"

void	vct_dellastchar(t_vector *vct)
{
	vct->len--;
	vct->str[vct->len] = '\0';
}
