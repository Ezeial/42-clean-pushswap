/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:15:21 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:15:41 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stacks *stacks)
{
	t_list_elem	*top_a_elem;

	top_a_elem = ft_lstpop_front(stacks->a);
	if (!top_a_elem)
		return ;
	ft_lstpush_front(stacks->b, top_a_elem);
	write(1, "pb\n", 3);
}
