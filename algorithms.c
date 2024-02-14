/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:28:58 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/14 16:06:07 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_numbers(IntArr *stack)
{
	if(stack->array[0] < stack->array[1])
		return ;
	else
		sa(stack);
}

void three_numbers(IntArr *stack_a)
{
// 	int	biggest_index;
	
// 	biggest_index = find_max(stack_a);
	
// 	if(biggest_index == stack_a->array[0])
// 		ra(stack_a);
// 	else if(stack_a->array[1] == biggest_index)
// 		rra(stack_a);
// 	if(stack_a->array[0] > stack_a->array[1])
// 		sa(stack_a);
		
	if(stack_a->array[0] > stack_a->array[1] && stack_a->array[1] > stack_a->array[2])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if(stack_a->array[0] > stack_a->array[1] && stack_a->array[1] < stack_a->array[2] && stack_a->array[0] > stack_a->array[2])
	{
		ra(stack_a);
	}
	else if(stack_a->array[0] > stack_a->array[1] && stack_a->array[1] < stack_a->array[2] && stack_a->array[0] < stack_a->array[2])
	{
		sa(stack_a);
	}
	else if(stack_a->array[0] < stack_a->array[1] && stack_a->array[1] > stack_a->array[2] && stack_a->array[0] < stack_a->array[2])
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if(stack_a->array[0] < stack_a->array[1] && stack_a->array[1] > stack_a->array[2] && stack_a->array[0] > stack_a->array[2])
	{
		// sa(stack_a);
		rra(stack_a);
	}
}


// void five_numbers(IntArr *stack_a, IntArr *stack_b)
// {
// 	int i;
	
// 	i = stack_a->size;
// 	while(i > 3)
// 	{
// 		pb(stack_a, stack_b);
// 		i--;
// 	}
// 	three_numbers(stack_a);
// 	two_numbers(stack_b);
// 	i = 2;
// 	while (i > 0)
// 	{
// 		pa(stack_a,stack_b);
// 		i--;
// 	}
		
	
// }


