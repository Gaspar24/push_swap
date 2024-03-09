/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:42:14 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/17 15:29:38 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max(IntArr *stack)
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
// int	find_max_index(IntArr *stack)
// {
// 	int i;

// 	i = 0;
// 	while (i < stack->size)
// 	{
// 		if(stack->array[i] == find_max(stack))
// 			return (i);
// 		i++;
// 	}
// 	return (-1);
	
// }

int	find_min(IntArr *stack)
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

// int	find_min_index(IntArr *stack)
// {
// 	int i;

// 	i = 0;
// 	while (i < stack->size)
// 	{
// 		if(stack->array[i] == find_min(stack))
// 			return (i);
// 		i++;
// 	}
// 	return (-1);
	
// }

int stack_is_sorted(IntArr *stack)
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