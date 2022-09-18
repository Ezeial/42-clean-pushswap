#include "push_swap.h"

void	ft_ra(t_stacks *stacks)
{
	ft_lstshift_up(stacks->A);	
	write(1, "ra\n", 3);
}