/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:16:42 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:16:51 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_stacks *stacks)
{
	ft_lstshift_down(stacks->a);
	ft_lstshift_down(stacks->b);
	write(1, "rrr\n", 4);
}
