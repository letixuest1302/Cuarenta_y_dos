#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current_unit;
	int		counter;

	if (!lst)
		return (0);
	counter = 0;
	current_unit = lst;
	while (current_unit)
	{
		current_unit = current_unit->next;
		counter++;
	}
	return (counter);
}
