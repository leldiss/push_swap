/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_ss_pp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:46:21 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 15:52:01 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *a;
	tmp1 = tmp->next->next;
	*a = (*a)->next;
	(*a)->next = tmp;
	(*a)->next->next = tmp1;
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *b;
	tmp1 = tmp->next->next;
	*b = (*b)->next;
	(*b)->next = tmp;
	(*b)->next->next = tmp1;
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *a;
	tmp1 = tmp->next->next;
	*a = (*a)->next;
	(*a)->next = tmp;
	(*a)->next->next = tmp1;
	tmp = *b;
	tmp1 = tmp->next->next;
	*b = (*b)->next;
	(*b)->next = tmp;
	(*b)->next->next = tmp1;
	write(1, "ss\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}
