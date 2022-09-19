/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:14:27 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:14:44 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stacks(t_stacks *stacks)
{
	stacks->a = ft_lstnew();
	if (!stacks->a)
		return (-1);
	stacks->b = ft_lstnew();
	if (!stacks->b)
	{
		ft_lstclear(stacks->a, free);
		return (-1);
	}
	return (0);
}
