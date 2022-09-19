/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:20:34 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:20:43 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stacks *stacks)
{
	int	top;
	int	mid;
	int	bot;

	top = *((int *)stacks->a->top->data);
	mid = *((int *)stacks->a->top->next->data);
	bot = *((int *)stacks->a->top->next->next->data);
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
