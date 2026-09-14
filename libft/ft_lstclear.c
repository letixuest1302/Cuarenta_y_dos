#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_unit;
	t_list	*next_unit;

	if (!(lst) || !(*lst))
		return ;
	current_unit = *lst;
	while (current_unit)
	{
		next_unit = current_unit->next;
		if (del && current_unit->content)
			del(current_unit->content);
		free(current_unit);
		current_unit = next_unit;
	}
	*lst = NULL;
}
