/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:54:00 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 14:33:15 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *a;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*a = tmp->next;
	tmp->next = NULL;
	(*a)->next = tmp1;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *b;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*b = tmp->next;
	tmp->next = NULL;
	(*b)->next = tmp1;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *a;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*a = tmp->next;
	tmp->next = NULL;
	(*a)->next = tmp1;
	tmp = *b;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*b = tmp->next;
	tmp->next = NULL;
	(*b)->next = tmp1;
	write(1, "rrr\n", 4);
}
