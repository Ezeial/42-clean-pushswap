/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:17:21 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:17:41 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_stacks *stacks)
{
	if (ft_lstsize(stacks->a) > 1)
		ft_swap_int(stacks->a->top->data, stacks->a->top->next->data);
	if (ft_lstsize(stacks->b) > 1)
		ft_swap_int(stacks->b->top->data, stacks->b->top->next->data);
	write(1, "ss\n", 3);
}
