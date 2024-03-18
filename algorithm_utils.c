/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:26:59 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/18 10:58:10 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_IntArr *stack, int elem)
{
	int	index;

	index = 0;
	while (stack->array[index] != elem)
		index++;
	return (index);
}

void	move_to_a(t_IntArr *stack_a, int index)
{
	int	dist_up;
	int	dist_down;

	dist_up = index;
	dist_down = stack_a->size - index;
	if (dist_up <= dist_down)
	{
		while (dist_up > 0)
		{
			ra(stack_a);
			dist_up--;
		}
	}
	else
	{
		while (dist_down > 0)
		{
			rra(stack_a);
			dist_down--;
		}
	}
}

void	move_to_b(t_IntArr *stack_b, int index)
{
	int	dist_up;
	int	dist_down;

	dist_up = index;
	dist_down = stack_b->size - index;
	if (dist_up <= dist_down)
	{
		while (dist_up > 0)
		{
			rb(stack_b);
			dist_up--;
		}
	}
	else
	{
		while (dist_down > 0)
		{
			rrb(stack_b);
			dist_down--;
		}
	}
}

int	get_next_smallest(t_IntArr *stack, int smallest)
{
	int	i;
	int	next_smallest;

	next_smallest = find_max(stack);
	i = 0;
	while (i < stack->size)
	{
		if (stack->array[i] > smallest && stack->array[i] < next_smallest)
			next_smallest = stack->array[i];
		i++;
	}
	return (next_smallest);
}
