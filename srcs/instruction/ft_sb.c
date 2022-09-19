/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:17:09 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:17:19 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stacks *stacks)
{
	if (ft_lstsize(stacks->b) < 2)
		return ;
	ft_swap_int(stacks->b->top->data, stacks->b->top->next->data);
	write(1, "sb\n", 3);
}
