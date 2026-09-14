#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_unit;

	if (!lst)
		return (0);
	current_unit = lst;
	while (current_unit->next)
		current_unit = current_unit->next;
	return (current_unit);
}
