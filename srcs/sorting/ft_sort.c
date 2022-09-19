/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:20:51 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:22:01 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stacks *stacks)
{
	if (ft_lstis_sorted(stacks->a))
		return ;
	if (stacks->elem_count == 2)
		ft_sort_two(stacks);
	else if (stacks->elem_count == 3)
		ft_sort_three(stacks);
	else if (stacks->elem_count <= 5)
		ft_sort_five(stacks);
	else
		ft_radix(stacks);
}
