#include "push_swap.h"

void	ft_rra(t_stacks *stacks)
{
	ft_lstshift_down(stacks->A);
	write(1, "rra\n", 4);
}