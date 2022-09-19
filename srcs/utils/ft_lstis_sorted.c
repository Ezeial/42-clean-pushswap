/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstis_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:22:16 by egiraldi          #+#    #+#             */
/*   Updated: 2022/09/19 18:22:19 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstis_sorted(t_list *lst)
{
	t_list_elem	*current;

	current = lst->top;
	while (current)
	{
		if (current->next)
			if (*((int *)current->next->data) < *((int *)current->data))
				return (0);
		current = current->next;
	}
	return (1);
}
