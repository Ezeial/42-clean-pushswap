#include "push_swap.h"

void	ft_ss(t_stacks *stacks)
{
	if (ft_lstsize(stacks->A) > 1)
		ft_swap_int(stacks->A->top->data, stacks->A->top->next->data);
	if (ft_lstsize(stacks->B) > 1)
		ft_swap_int(stacks->B->top->data, stacks->B->top->next->data);
	write(1, "ss\n", 3);
}