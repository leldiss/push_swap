/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:09:07 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 15:54:12 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_int_arr(int *num, int *num1, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		num1[i] = num[i];
		i++;
	}
	return (*num1);
}

int	create_arr(t_stack *list, int *num)
{
	int	i;

	if (!list || !num)
		return (0);
	i = 0;
	while (list)
	{
		num[i] = list->digit;
		list = list->next;
		i++;
	}
	return (*num);
}

int	index_chr(int *num, int num2)
{
	int	i;

	i = 0;
	while (num[i] != num2)
		i++;
	return (i);
}

int	bubl_sort_arr(int *num, int size)
{
	int	i;
	int	j;
	int	tmp;

	if (!num || !size)
		return (0);
	i = 0;
	tmp = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (num[j - 1] > num[j])
			{
				tmp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = tmp;
			}
			j--;
		}
		i++;
	}
	return (*num);
}

void	get_index(t_stack **a, int size)
{
	t_stack	*b;
	t_stack	*z;
	int		l;
	int		*num;
	int		*num1;

	l = 0;
	b = *a;
	z = b;
	num = malloc(sizeof(int) * (size + 1));
	num1 = malloc(sizeof(int) * (size + 1));
	if (!num || !num1)
		return ;
	*num = create_arr(b, num);
	*num1 = create_int_arr(num, num1, size);
	*num = bubl_sort_arr(num, size);
	while (z != NULL)
	{
		z->index = index_chr(num, num1[l]);
		z = z->next;
		l++;
	}
	free(num);
	free(num1);
}
