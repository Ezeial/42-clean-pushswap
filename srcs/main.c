#include "push_swap.h"

void ft_print_el(size_t index, void *value, void *arg)
{
	(void)index;
	(void)arg;
	printf("%d | ", *((int *)value));
}

void ft_print_stacks(t_stacks *stacks)
{
	printf("\nElem count: %ld\n[A]: ", stacks->elem_count);
	ft_lstiter(stacks->A, ft_print_el, NULL);
	printf("\n");
	printf("[B]: ");
	ft_lstiter(stacks->B, ft_print_el, NULL);
	printf("\n");
}

int main(int ac, char **av)
{
	t_stacks stacks;

	if (ac < 2)
		return (0);
	if (ft_init_stacks(&stacks) < 0)
		return (1);
	if (ft_parse_args(ac, av, &stacks) < 0)
	{
		write(1, "Error\n", 6);
		ft_destroy_stacks(&stacks);
		return (1);
	}
	ft_sort(&stacks);
	ft_destroy_stacks(&stacks);
	return (0);
}