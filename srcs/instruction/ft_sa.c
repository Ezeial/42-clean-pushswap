/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:16:55 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:55:34 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stacks *stacks)
{
	if (ft_lstsize(stacks->a) < 2)
		return ;
	ft_swap_int(stacks->a->top->data, stacks->a->top->next->data);
	write(1, "sa\n", 3);
}
