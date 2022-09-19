/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:16:10 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:16:19 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_stacks *stacks)
{
	ft_lstshift_up(stacks->a);
	ft_lstshift_up(stacks->b);
	write(1, "rr\n", 3);
}
