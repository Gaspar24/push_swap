/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:26:59 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/14 15:06:33 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	get_index(IntArr *stack, int element);
// {
// 	int		index;
	
// 	index = 0;
	
// 	while (stack->array[index] != element)
// 		index++;
// 	return (index);
	
// }
// void	move_to_top_of_a(IntArr *stack_a, int index)
// {
// 	int	distance_up;
// 	int	distance_down;

// 	distance_up = index;
// 	distance_down = stack_a->size - index;
// 	if (distance_up <= distance_down)
// 	{
// 		while (distance_up > 0)
// 		{
// 			ra(stack_a);
// 			distance_up--;
// 		}
// 	}
// 	else
// 	{
// 		while (distance_down > 0)
// 		{
// 			rra(stack_a);
// 			distance_down--;
// 		}
// 	}
// }

// void	move_to_top_of_b(IntArr *stack_b, int index)
// {
// 	int	distance_up;
// 	int	distance_down;

// 	distance_up = index;
// 	distance_down = stack_b->size - index;
// 	if (distance_up <= distance_down)
// 	{
// 		while (distance_up > 0)
// 		{
// 			rb(stack_b);
// 			distance_up--;
// 		}
// 	}
// 	else
// 	{
// 		while (distance_down > 0)
// 		{
// 			rrb(stack_b);
// 			distance_down--;
// 		}
// 	}
// }


// int		get_next_smallest(IntArr stack, int smallest)
// {
// 	int	i;
// 	int	next_smallest;

// 	next_smallest = get_max_in_stack(stack);
// 	i = 0;
// 	while (i < stack.size)
// 	{
// 		if (stack.array[i] > smallest && stack.array[i] < next_smallest)
// 			next_smallest = stack.array[i];
// 		i++;
// 	}
// 	return (next_smallest);
// }