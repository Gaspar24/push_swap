/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:42:14 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/15 13:47:01 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max(IntArr *stack)
{
	int i;
	int j;
	int temp;
	
	i = 0;
	while(i < stack->size)
	{
		j = 0;
		while (j < stack->size -i - 1)
		{
			if(stack->array[j] > stack->array[j + 1])
			{
				temp = stack->array[j];
				stack->array[j] = stack->array[j + 1];
				stack->array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (stack->array[stack->size - 1]);
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
	int i;
	int j;
	int temp;
	
	i = 0;
	while(i < stack->size)
	{
		j = 0;
		while (j < stack->size -i - 1)
		{
			if(stack->array[j] < stack->array[j + 1])
			{
				temp = stack->array[j];
				stack->array[j] = stack->array[j + 1];
				stack->array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (stack->array[stack->size - 1]);
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

int stack_is_sorted(IntArr *stack_a)
{
	int i;
	
	i = 0;
	while(i < stack_a->size - 1)
	{
		if(stack_a->array[i] > stack_a->array[i + 1])
			return (0);
		i++;
	}
	return (1);
}