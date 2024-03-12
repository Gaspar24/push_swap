/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:28:58 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/12 16:13:10 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_numbers(IntArr *stack)
{
	if (stack->array[0] < stack->array[1])
		return ;
	else
		sa(stack);
}

void	three_numbers(IntArr *stack_a)
{
	if (stack_a->array[0] > stack_a->array[1]
		&& stack_a->array[1] > stack_a->array[2])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (stack_a->array[0] > stack_a->array[1] && stack_a->array[1]
		< stack_a->array[2] && stack_a->array[0] > stack_a->array[2])
		ra(stack_a);
	else if (stack_a->array[0] > stack_a->array[1] && stack_a->array[1]
		< stack_a->array[2] && stack_a->array[0] < stack_a->array[2])
	{
		sa(stack_a);
	}
	else if (stack_a->array[0] < stack_a->array[1] && stack_a->array[1]
		> stack_a->array[2] && stack_a->array[0] < stack_a->array[2])
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (stack_a->array[0] < stack_a->array[1] && stack_a->array[1]
		> stack_a->array[2] && stack_a->array[0] > stack_a->array[2])
	{
		rra(stack_a);
	}
}

void	five_numbers(IntArr *stack_a, IntArr *stack_b)
{
	int	min_a;
	int	max_a;

	if (!stack_is_sorted(stack_a))
	{
		max_a = find_max(stack_a);
		move_to_a(stack_a, get_index(stack_a, max_a));
		pb(stack_a, stack_b);
		min_a = find_min(stack_a);
		move_to_a(stack_a, get_index(stack_a, min_a));
		pb(stack_a, stack_b);
		three_numbers(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}
