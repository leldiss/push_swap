/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:03:43 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 20:51:27 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_num(t_stack **a, int *num)
{
	free(num);
	free_list(a);
	write(1, "Error\n", 6);
	exit (0);
}

void	free_stacks(t_stack **a, t_stack **b)
{
	free_list(a);
	free_list(b);
	exit(0);
}

void	sort_pa(t_stack **a, t_stack **b)
{
	while ((*b) != NULL)
	{
		if (!b)
			break ;
		if ((*b)->index != maxchr(b) && !eq_src(b, maxchr(b), numb_amo(b)))
			rb(b);
		else if ((*b)->index != maxchr(b) && eq_src(b, maxchr(b), numb_amo(b)))
			rrb(b);
		else if ((*b)->index == maxchr(b))
			pa(a, b);
	}
}

void	sort_100(t_stack **a, t_stack **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= 1)
		{
			pb(a, b);
			l++;
			rb(b);
		}
		else if ((*a)->index <= l + 15)
		{
			pb(a, b);
			l++;
		}
		else if ((*a)->index >= l)
			ra(a);
	}
	sort_pa(a, b);
}

void	sort_500(t_stack **a, t_stack **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= l)
		{
			pb(a, b);
			l++;
			rb(b);
		}
		else if ((*a)->index <= l + 30)
		{
			pb(a, b);
			l++;
		}
		else if ((*a)->index >= l)
			ra(a);
	}
	sort_pa(a, b);
}
