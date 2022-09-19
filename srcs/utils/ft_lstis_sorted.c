#include "push_swap.h"

int	ft_lstis_sorted(t_list *lst)
{
	t_list_elem	*current;

	current = lst->top;
	while (current)
	{
		if (current->next)
			if (*((int *)current->next->data) < *((int *)current->data))
				return (0);
		current = current->next;
	}
	return (1);
}