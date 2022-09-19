#include "push_swap.h"

void	ft_sort_three(t_stacks *stacks)
{
	int	top;
	int	mid;
	int	bot;

	top = *((int *)stacks->A->top->data);
	mid = *((int *)stacks->A->top->next->data);
	bot = *((int *)stacks->A->top->next->next->data);
	if (top > mid && top < bot && mid < bot)
		ft_sa(stacks);
	else if (top > mid && top > bot && mid > bot)
	{
		ft_sa(stacks);
		ft_rra(stacks);
	}
	else if (top > mid && top > bot && mid < bot)
		ft_ra(stacks);
	else if (top < mid && top < bot && mid > bot)
	{
		ft_sa(stacks);
		ft_ra(stacks);
	}
	else if (top < mid && top > bot && mid > bot)
		ft_rra(stacks);
}