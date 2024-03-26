/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:24:03 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/24 12:00:49 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "./lib/libftprintf/ft_printf.h"

typedef struct t_IntArr
{
	int	*array;
	int	size;
	int	index;
}	t_IntArr;

typedef struct t_ValidationState
{
	int	i;
	int	digit_count;
	int	has_minus;
	int	has_digit;
}	t_ValidationState;

int			validate_input(char *str);
int			count_nb(char *str);
int			ft_atoi(char *str);
int			check_for_doubles(char *str);
int			ft_strlen(char *str);
char		*create_str(int argc, char *argv[]);
int			ft_strlen_mod(char *str);
t_IntArr	create_stack_a(char *str);
char		*extract_nb(char *str, int start);
t_IntArr	create_stack_b(void);
int			check_size(int *stack);
int			is_space(char c);
int			is_digit(char c);
t_IntArr	*expand_stack(t_IntArr *stack);
t_IntArr	*delete_index(t_IntArr *stack);
int			get_index(t_IntArr *stack, int elem);
int			stack_is_sorted(t_IntArr *stack);
int			get_next_smallest(t_IntArr *stack, int smallest);
void		move_to_b(t_IntArr *stack_b, int index);
void		move_to_a(t_IntArr *stack_a, int index);
void		sa(t_IntArr *stack_a);
void		sb(t_IntArr *stack_b);
void		pa(t_IntArr *stack_a, t_IntArr *stack_b);
void		pb(t_IntArr *stack_a, t_IntArr *stack_b);
void		ss(t_IntArr *stack_a, t_IntArr *stack_b);
void		ra(t_IntArr *stack_a);
void		rb(t_IntArr *stack_b);
void		rr(t_IntArr *stack_a, t_IntArr *stack_b);
void		rra(t_IntArr *stack_a);
void		rrb(t_IntArr *stack_b);
void		rrr(t_IntArr *stack_a, t_IntArr *stack_b);
int			find_max(t_IntArr *stack);
int			find_min(t_IntArr *stack);
void		two_numbers(t_IntArr *stack);
void		three_numbers(t_IntArr *stack_a);
void		five_numbers(t_IntArr *stack_a, t_IntArr *stack_b);
void		unlimited_numbers(t_IntArr *stack_a, t_IntArr *stack_b);
t_IntArr	generate_sorted_a(t_IntArr *stack_a);

#endif