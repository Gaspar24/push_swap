/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:42:14 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/13 11:13:05 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_IntArr *stack)
{
	int	max;
	int	index;

	max = 0;
	if (stack->array != NULL)
	{
		max = stack->array[0];
		index = 1;
		while (index < stack->size)
		{
			if (max < stack->array[index])
				max = stack->array[index];
			index++;
		}
	}
	return (max);
}

int	find_min(t_IntArr *stack)
{
	int	min;
	int	index;

	min = 0;
	if (stack->array != NULL)
	{
		min = stack->array[0];
		index = 1;
		while (index < stack->size)
		{
			if (min > stack->array[index])
				min = stack->array[index];
			index++;
		}
	}
	return (min);
}

int	stack_is_sorted(t_IntArr *stack)
{
	int	previous_element;
	int	sorted;
	int	index;

	sorted = 1;
	if (stack->size > 0)
	{
		previous_element = stack->array[0];
		index = 1;
		while (index < stack->size)
		{
			if (previous_element > stack->array[index])
				sorted = 0;
			previous_element = stack->array[index];
			index++;
		}
	}
	return (sorted);
}
