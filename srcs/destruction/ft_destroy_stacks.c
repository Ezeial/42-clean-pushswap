/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:13:56 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:14:18 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_destroy_stacks(t_stacks *stacks)
{
	ft_lstclear(stacks->a, free);
	stacks->a = NULL;
	ft_lstclear(stacks->b, free);
	stacks->b = NULL;
}
