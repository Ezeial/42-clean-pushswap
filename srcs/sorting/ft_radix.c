/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:19:49 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:19:57 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_get_max_bits(t_stacks *stacks)
{
	size_t	max_value;
	size_t	max_bits;

	max_value = stacks->elem_count - 1;
	max_bits = 0;
	while ((max_value >> max_bits) > 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix(t_stacks *stacks)
{
	size_t		max_bits;
	size_t		bit_idx;
	size_t		stack_idx;

	max_bits = ft_get_max_bits(stacks);
	bit_idx = 0;
	while (bit_idx < max_bits)
	{
		stack_idx = 0;
		while (stack_idx < stacks->elem_count)
		{
			if (((*((int *)stacks->a->top->data) >> bit_idx) & 1) == 1)
				ft_ra(stacks);
			else
				ft_pb(stacks);
			stack_idx++;
		}
		while (ft_lstsize(stacks->b) > 0)
			ft_pa(stacks);
		bit_idx++;
	}
}
