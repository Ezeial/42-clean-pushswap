#include "push_swap.h"

static int	ft_is_value_in_stack(t_list	*stack, int value)
{
	t_list_elem *current;

	if (stack)
	{
		current = stack->top;
		while (current)
		{
			if (*((int *)current->data) == value)
				return (1);
			current = current->next;
		}
	}
	return (0);
}

static int	ft_push_int_to_stack(t_list *stack, int value)
{
	t_list_elem *new_elem;
	int			*new_value;

	if (ft_is_value_in_stack(stack, value))
		return (-3);
	new_value = (int *)malloc(sizeof(int));
	if (!new_value)
		return (-4);
	*new_value = value;
	new_elem = ft_lstcreate_elem(new_value);
	if (!new_elem)
	{
		free(new_value);
		return (-4);
	}
	ft_lstpush_back(stack, new_elem);
	return (0);
}

static int	ft_parse_str(char *str, t_list *stack)
{
	int	current_value;
	int	ret;

	while (*str)
	{
		while (ft_iswhitespace(*str))
			str++;
		if (*str == 0)
			return (0);
		ret = ft_parse_int(&str, &current_value);
		if (ret < 0)
			return (ret);
		ret = ft_push_int_to_stack(stack, current_value);
		if (ret < 0)
			return (ret);
	}
	return (0);
}

/*
**	Parse the arguments and validate the user input
**	Fill the A stack with integers parsed and mapped to their index in a sorted order
**	Return:
**		-4	-> error: allocation error
**		-3	-> error: duplicate number 
**		-2	-> error: outside of integer bounds
**		-1	-> error: not an integer
**		 0	-> success
*/

int	ft_parse_args(int ac, char **av, t_stacks *stacks)
{
	t_list	*mapped_lst;
	size_t	idx;
	int		ret;
	
	idx = 1;
	while (idx < (size_t)ac)
	{
		ret = ft_parse_str(av[idx], stacks->A);
		if (ret < 0)
			return (ret);
		idx++;
	}
	mapped_lst = ft_lstmap_to_sorted_idx(stacks->A);
	if (!mapped_lst)
		return (-4);
	ft_lstclear(stacks->A, free);
	stacks->A = mapped_lst;
	stacks->elem_count = ft_lstsize(stacks->A);
	return (0);
}