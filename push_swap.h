/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:24:03 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/14 15:57:50 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include "../libftprintf/ft_printf.h"

typedef struct 
{
	int     *array;
	int     size;
	int		index;
	int 	push_cost;
	bool	above_median;
	bool	cheapest;
}	IntArr;


int		validate_input(char *str);
int		count_nb(char *str);
int		ft_atoi(char *str);
int		check_for_doubles(char *str);
int		ft_strlen(char *str);
char	*create_str(int argc, char *argv[]);
int		ft_strlen_mod(char *str);
IntArr	create_stack_a(char *str);
char	*extract_nb(char *str, int start);
IntArr	create_stack_b(void);
int		check_size(int *stack);
IntArr	*expand_stack(IntArr *stack);
IntArr	*delete_index(IntArr *stack);
int		stack_is_sorted(IntArr *stack_a);
void	sa(IntArr *stack_a);
void	sb(IntArr *stack_b);
void	pa(IntArr *stack_a, IntArr *stack_b);
void	pb(IntArr *stack_a,IntArr *stack_b);
void	ss(IntArr *stack_a, IntArr *stack_b);
void	ra(IntArr *stack_a);
void	rb(IntArr *stack_b);
void	rr(IntArr *stack_a, IntArr *stack_b);
void	rra(IntArr *stack_a);
void	rrb(IntArr *stack_b);
void	rrr(IntArr *stack_a, IntArr *stack_b);
int		find_max(IntArr *stack);
int		find_min(IntArr *stack);
void	two_numbers(IntArr *stack);
void	three_numbers(IntArr *stack_a);
void	five_numbers(IntArr *stack_a, IntArr *stack_b);



#endif