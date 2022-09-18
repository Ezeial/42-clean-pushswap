#include "push_swap.h"

void	ft_pa(t_stacks *stacks)
{
	t_list_elem *top_b_elem;

	top_b_elem = ft_lstpop_front(stacks->B);
	if (!top_b_elem)
		return;
	ft_lstpush_front(stacks->A, top_b_elem);
	write(1, "pa\n", 3);
}