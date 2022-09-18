#include "push_swap.h"

void	ft_rrr(t_stacks *stacks)
{
	ft_lstshift_down(stacks->A);
	ft_lstshift_down(stacks->B);
	write(1, "rrr\n", 4);
}