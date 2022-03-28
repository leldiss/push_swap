/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:42:40 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 15:53:42 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_arr_index(t_stack *a, int *num)
{
	int	i;

	if (!a || !num)
		return (0);
	i = 0;
	while (a)
	{
		num[i] = a->index;
		a = a->next;
		i++;
	}
	return (*num);
}

int	numb_amo(t_stack **a)
{
	t_stack	*p;
	int		i;

	i = 0;
	p = *a;
	while (p->next != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}

int	eq_src(t_stack **a, int med, int i)
{
	int	k;
	int	*num;

	num = malloc(sizeof(int) * (i + 1));
	if (!num)
		return (0);
	*num = create_arr_index(*a, num);
	k = i;
	while (num[i] != med)
		i--;
	k = k - i;
	i = 0;
	while (num[i] != med)
		i++;
	free(num);
	if (k < i)
		return (1);
	return (0);
}

void	free_list(t_stack **a)
{
	t_stack	*p;

	while (*a != NULL)
	{
		p = *a;
		*a = (*a)->next;
		free(p);
	}
}
