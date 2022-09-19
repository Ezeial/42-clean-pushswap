#include "push_swap.h"

static int	ft_lstget_min(t_list *lst)
{
	t_list_elem	*current;
	int 		ret;

	current = lst->top;
	if (!current)
		return (-1);
	ret = *((int *)current->data);
	while (current)
	{
		if (*((int *)current->data) < ret)
			ret = *((int *)current->data);
		current = current->next;
	}
	return (ret);
}

static int	ft_lstget_pos(t_list *lst, int to_find)
{
	t_list_elem	*current;
	int			pos;

	current = lst->top;
	pos = 0;
	while (current)
	{
		if (*((int *)current->data) == to_find)
			return (pos);
		pos++;
		current = current->next;
	}
	return (pos);
}

static void	ft_setmin_topa(t_stacks *stacks)
{
	int	min;
	int minpos;

	min = ft_lstget_min(stacks->A);
	minpos = ft_lstget_pos(stacks->A, min);
	if ((size_t)minpos < stacks->elem_count / 2)
		while (*((int *)stacks->A->top->data) != min)
			ft_ra(stacks);
	else
		while (*((int *)stacks->A->top->data) != min)
			ft_rra(stacks);
}

void	ft_sort_five(t_stacks *stacks)
{
	ft_setmin_topa(stacks);
	ft_pb(stacks);
	if (stacks->elem_count == 5)
	{
		ft_setmin_topa(stacks);
		ft_pb(stacks);
	}
	ft_sort_three(stacks);
	ft_pa(stacks);
	ft_pa(stacks);
}