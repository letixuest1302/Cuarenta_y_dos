#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*unit;

	unit = (t_list *)malloc(sizeof(t_list));
	if (!unit)
		return (NULL);
	unit->content = content;
	unit->next = NULL;
	return (unit);
}
