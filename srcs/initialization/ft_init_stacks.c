#include "push_swap.h"

int	ft_init_stacks(t_stacks *stacks)
{
	stacks->A = ft_lstnew();
	if (!stacks->A)
		return (-1);
	stacks->B = ft_lstnew();
	if (!stacks->B)
	{
		ft_lstclear(stacks->A, free);
		return (-1);
	}
	return (0);
}