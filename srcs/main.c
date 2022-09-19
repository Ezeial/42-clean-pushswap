/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:23:08 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:23:31 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;

	if (ac < 2)
		return (0);
	if (ft_init_stacks(&stacks) < 0)
		return (1);
	if (ft_parse_args(ac, av, &stacks) < 0)
	{
		write(2, "Error\n", 6);
		ft_destroy_stacks(&stacks);
		return (1);
	}
	ft_sort(&stacks);
	ft_destroy_stacks(&stacks);
	return (0);
}
