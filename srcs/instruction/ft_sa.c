#include "push_swap.h"

void	ft_sa(t_stacks *stacks)
{
	if (ft_lstsize(stacks->A) < 2)
		return ;
	ft_swap_int(stacks->A->top->data, stacks->A->top->next->data);
	write(1, "sa\n", 3);
}