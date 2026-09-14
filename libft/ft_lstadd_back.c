#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_unit;

	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	current_unit = *lst;
	while (current_unit->next != NULL)
		current_unit = current_unit->next;
	current_unit->next = new;
}
