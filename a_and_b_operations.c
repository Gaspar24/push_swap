/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_and_b_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:53:23 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/07 13:54:07 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(IntArr *stack_a, IntArr *stack_b)
{
	int	temp;
	
	if(stack_a->size >= 2 && stack_b->size >= 2)
	{
		temp = stack_a->array[0];
		stack_a->array[0] = stack_a->array[1];
		stack_a->array[1] = temp;
		
		temp = stack_b->array[0];
		stack_b->array[0] = stack_b->array[1];
		stack_b->array[1] = temp;
		ft_printf("ss\n");
	}
	
}

void rr(IntArr *stack_a, IntArr *stack_b)
{

	int	i;
	int first_elem;

	i = 0;
	if(stack_a->size > 1 && stack_b->size)
	{
		first_elem = stack_a->array[0];
		while (i < stack_a->size - 1)
		{
			stack_a->array[i] = stack_a->array[i + 1];
			i++;
		}
		stack_a->array[stack_a->size - 1] = first_elem;
		
		i = 0;
		first_elem = stack_b->array[0];
		while (i < stack_b->size - 1)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->size - 1] = first_elem;
		ft_printf("rr\n");
	}
	
}

void	rrr(IntArr *stack_a, IntArr *stack_b)
{
	int	i;
	int last_elem;
	

	if(stack_a->size > 1 && stack_b->size > 1 )
	{
		last_elem = stack_a->array[stack_a->size - 1];
		i = stack_a->size- 1;
		while (i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = last_elem;
		
		last_elem = stack_b->array[stack_b->size - 1];
		i = stack_b->size - 1;
		while (i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = last_elem;
		ft_printf("rrr\n");
	}
	
}