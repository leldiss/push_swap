/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:46:32 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 15:43:14 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *a;
	tmp1 = *a;
	*a = (*a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *b;
	tmp1 = *b;
	*b = (*b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *a;
	tmp1 = *a;
	*a = (*a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	tmp = *b;
	tmp1 = *b;
	*b = (*b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "rr\n", 3);
}
