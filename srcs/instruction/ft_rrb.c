#include "push_swap.h"

void	ft_rrb(t_stacks *stacks)
{
	ft_lstshift_down(stacks->B);
	write(1, "rrb\n", 4);
}