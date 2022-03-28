/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:18:43 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/27 20:49:49 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_error(void)
{
	write(1, "Error\n", 6);
	exit (0);
}

void	parse_error(t_stack **a)
{
	free_list(a);
	write(1, "Error\n", 6);
	exit (0);
}

int	ft_atoi(const char *str, t_stack **a)
{
	int	n_or_p;
	int	result;

	result = 0;
	n_or_p = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n_or_p *= -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + (*str % 48);
		}
		else
			parse_error(a);
		str++;
	}
	return (result * n_or_p);
}

int	main(int argc, char **argv)
{
	static t_stack	*a;
	static t_stack	*b;
	static int		i;
	int				tmp;

	while (argc != 1)
	{
		tmp = ft_atoi(argv[--argc], &a);
		if (tmp < 0 && argv[argc][0] != '-')
			show_error();
		if (tmp > 0 && argv[argc][0] == '-')
			show_error();
		push(&a, tmp);
		i++;
	}
	if (a && i)
	{
		check_list(&a, i);
		get_index(&a, i);
		if (is_sorted(a))
			sort(&a, &b, i);
	}
	free_stacks(&a, &b);
	return (0);
}
