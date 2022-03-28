/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:18:53 by leldiss           #+#    #+#             */
/*   Updated: 2022/03/28 09:53:33 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				digit;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		ft_atoi(const char *str, t_stack **a);
void	show_error(void);
void	push(t_stack **pushlist, int data);
void	check_list(t_stack **a, int argc);
int		is_sorted(t_stack *a);
int		minchr(t_stack **a);
int		maxchr(t_stack **a);
int		create_int_arr(int *num, int *num1, int size);
int		create_arr(t_stack *list, int *num);
int		index_chr(int *num, int num2);
int		bubl_sort_arr(int *num, int size);
void	get_index(t_stack **a, int size);
int		create_arr_index(t_stack *a, int *num);
int		numb_amo(t_stack **a);
int		eq_src(t_stack **a, int med, int i);
void	free_num(t_stack **a, int *num);
void	parse_error(t_stack **a);
void	free_list(t_stack **a);
void	free_stacks(t_stack **a, t_stack **b);

void	sort(t_stack **a, t_stack **b, int count);
void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	sort_pa(t_stack **a, t_stack **b);
void	sort_100(t_stack **a, t_stack **b);
void	sort_500(t_stack **a, t_stack **b);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif
