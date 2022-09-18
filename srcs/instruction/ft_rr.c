#include "push_swap.h"

void	ft_rr(t_stacks *stacks)
{
	ft_lstshift_up(stacks->A);
	ft_lstshift_up(stacks->B);
	write(1, "rr\n", 3);
}