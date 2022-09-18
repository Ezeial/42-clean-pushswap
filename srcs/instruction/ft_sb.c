#include "push_swap.h"

void	ft_sb(t_stacks *stacks)
{
	if (ft_lstsize(stacks->B) < 2)
		return ;
	ft_swap_int(stacks->B->top->data, stacks->B->top->next->data);
	write(1, "sb\n", 3);
}