#include "push_swap.h"

void	ft_rb(t_stacks *stacks)
{
	ft_lstshift_up(stacks->B);
	write(1, "rb\n", 3);
}