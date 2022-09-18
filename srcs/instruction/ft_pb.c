#include "push_swap.h"

void	ft_pb(t_stacks *stacks)
{
	t_list_elem *top_a_elem;

	top_a_elem = ft_lstpop_front(stacks->A);
	if (!top_a_elem)
		return;
	ft_lstpush_front(stacks->B, top_a_elem);	
	write(1, "pb\n", 3);
}