/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:29:51 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/18 14:31:50 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void buble_sort(t_IntArr *sorted_a)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while (i < sorted_a->size)
	{
		j = 0;
		while (j < sorted_a->size - 1 - i)
		{
			if(sorted_a->array[j] > sorted_a->array[j + 1])
			{
				temp = sorted_a->array[j];
				sorted_a->array[j] = sorted_a->array[j + 1];
				sorted_a->array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

t_IntArr sort_test(t_IntArr *stack)
{
	int i = 0;
	t_IntArr sorted_a;
	int *sorted_a_array;

	sorted_a_array = malloc(sizeof(int) * stack->size);
	sorted_a.array = sorted_a_array;
	sorted_a.size = stack->size;
	while (i < sorted_a.size)
	{
		sorted_a.array[i] = stack->array[i];
		i++;
	}
	buble_sort(&sorted_a);
	return (sorted_a);
}


void divide_push_b(t_IntArr *stack_a, t_IntArr *stack_b, int mid)
{
	int i;

	i = 0;
	while (stack_a->size > 2)
	{
		if(stack_a->array[i] < mid)
			pb(stack_a, stack_a);
		else if(stack_a->array[stack_a->size -1] < mid)
		{
			rra(stack_a);
			pb(stack_a, stack_b);
		}
	}
	
}


// 2 3 5 12 10 6 9 7 4 1 8 11
int	get_midpoint(t_IntArr *stack)
{
	t_IntArr	sorted_a;
	int			mid;
	
	sorted_a = sort_a_test(stack);	
	mid = sorted_a.array[stack->size / 2];
	return (mid);
}

// void	sort(t_IntArr *stack_a, t_IntArr *stack_b)
// {
	
// }