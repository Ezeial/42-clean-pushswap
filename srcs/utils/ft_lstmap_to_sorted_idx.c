#include "push_swap.h"

static int ft_lstpush_int_back(t_list *lst, int value)
{
	int 		*new_value;
	t_list_elem	*new_elem;

	new_value = malloc(sizeof(int));
	if (!new_value)
		return (-1);
	*new_value = value;
	new_elem = ft_lstcreate_elem(new_value);
	if (!new_elem)
	{
		free(new_value);
		return (-1);
	}
	ft_lstpush_back(lst, new_elem);
	return (0);
}

/*
**	Get the number of integer that are smaller than our parameter in a list
**	Parameter:
**		lst -> the list to search in
**		value -> the value we want to know how many smaller number there are in list
**	Return:
**		-> The number of smaller number than [value] in the list
*/

static size_t	ft_lstcount_smaller_than(t_list * lst, int value)
{
	size_t		res;
	t_list_elem	*current_el;
	
	res = 0;
	if (lst)
	{
		current_el = lst->top;
		while (current_el)
		{
			if (*((int *)current_el->data) < value)
				res++;
			current_el = current_el->next;
		}
	}
	return (res);
}

/*
**	Map a new list with value replaced by index in a sorted order
**	Example : 50 100 75 give us 1 2 0.
**	Parameter:
**		lst -> lst to map
**	Return:
**		-> pointer to the new list correctly formatted
**		(NULL) if allocation error or with (NULL) lst as parameter
*/

t_list	*ft_lstmap_to_sorted_idx(t_list *lst)
{
	t_list_elem	*current_el;
	t_list		*mapped_lst;
	int			current_sorted_idx;

	if (!lst)
		return (NULL);
	mapped_lst = ft_lstnew();
	if (!mapped_lst)
		return (NULL);
	current_el = lst->top;
	while (current_el)
	{
		current_sorted_idx = ft_lstcount_smaller_than(lst, *((int *)current_el->data));
		if (ft_lstpush_int_back(mapped_lst, current_sorted_idx) < 0)
		{
			ft_lstclear(mapped_lst, free);
			return (NULL);
		}
		current_el = current_el->next;
	}
	return (mapped_lst);
}
