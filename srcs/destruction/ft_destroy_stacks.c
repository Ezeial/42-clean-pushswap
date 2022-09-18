#include "push_swap.h"

void ft_destroy_stacks(t_stacks *stacks)
{
	ft_lstclear(stacks->A, free);
	stacks->A = NULL;
	ft_lstclear(stacks->B, free);
	stacks->B = NULL;
}