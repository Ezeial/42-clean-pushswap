/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:14:52 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:15:12 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stacks *stacks)
{
	t_list_elem	*top_b_elem;

	top_b_elem = ft_lstpop_front(stacks->b);
	if (!top_b_elem)
		return ;
	ft_lstpush_front(stacks->a, top_b_elem);
	write(1, "pa\n", 3);
}
