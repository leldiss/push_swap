/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:20:05 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 16:03:05 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if ((*a)->next->index < (*a)->index)
		sa(a);
}

void	sort_3(t_stack **a)
{
	if ((*a)->index == maxchr(a))
		ra(a);
	if ((*a)->index == minchr(a) && (*a)->next->index == maxchr(a))
	{
		rra(a);
		sa(a);
	}
	if ((*a)->index != minchr(a) && (*a)->index > (*a)->next->index)
		sa(a);
	if ((*a)->index != minchr(a) && (*a)->index < (*a)->next->index)
		rra(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*a)->index > minchr(a) && !eq_src(a, minchr(a), numb_amo(a)))
			ra(a);
		else if ((*a)->index > minchr(a) && eq_src(a, minchr(a), numb_amo(a)))
			rra(a);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != minchr(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((*a)->index > minchr(a) && !eq_src(a, minchr(a), numb_amo(a)))
			ra(a);
		else if ((*a)->index > minchr(a) && eq_src(a, minchr(a), numb_amo(a)))
			rra(a);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != minchr(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	sort(t_stack **a, t_stack **b, int count)
{
	if (count == 2)
		sort_2(a);
	if (count == 3)
		sort_3(a);
	if (count == 4)
		sort_4(a, b);
	if (count == 5)
		sort_5(a, b);
	if (count > 5 && count <= 100)
		sort_100(a, b);
	if (count > 100)
		sort_500(a, b);
}
