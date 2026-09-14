#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_unit;

	if (!f)
		return ;
	current_unit = lst;
	while (current_unit)
	{
		f(current_unit->content);
		current_unit = current_unit->next;
	}
}
