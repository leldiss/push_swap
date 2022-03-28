/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:24:47 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 20:46:15 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **pushlist, int data)
{
	t_stack	*p;

	if (!pushlist)
		return ;
	p = malloc(sizeof(t_stack));
	if (!p)
		return ;
	p->digit = data;
	p->next = *pushlist;
	*pushlist = p;
}

void	check_list(t_stack **a, int argc)
{
	t_stack		*list;
	int			*num;
	static int	i;
	static int	z;
	static int	m;

	list = *a;
	num = malloc(sizeof(int) * argc);
	if (!num)
		return ;
	*num = create_arr(list, num);
	while (argc > m)
	{
		z = num[m];
		i = m + 1;
		while (argc > i)
		{
			if (num[i] == z)
				free_num(a, num);
			i++;
		}
		m++;
	}
	free(num);
}

int	is_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if ((a->index + 1) == a->next->index)
			a = a->next;
		else
			return (1);
	}
	return (0);
}

int	minchr(t_stack **a)
{
	int		i;
	t_stack	*p;

	i = 0;
	p = *a;
	i = p->index;
	while (p != NULL)
	{
		if (i > p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}

int	maxchr(t_stack **a)
{
	int		i;
	t_stack	*p;

	i = 0;
	p = *a;
	i = p->index;
	while (p != NULL)
	{
		if (i < p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}
