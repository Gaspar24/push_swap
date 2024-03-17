/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unlimited_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:37:06 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/17 11:46:49 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_IntArr	generate_sorted_a(t_IntArr *stack_a)
{
	t_IntArr	sorted_a;
	int			index;
	int			*sorted_a_array;

	sorted_a_array = malloc(sizeof(int) * stack_a->size);
	sorted_a.array = sorted_a_array;
	sorted_a.size = stack_a->size;
	sorted_a_array[0] = find_min(stack_a);
	index = 1;
	while (index < stack_a->size)
	{
		sorted_a_array[index]
			= get_next_smallest(stack_a, sorted_a_array[index - 1]);
		index++;
	}
	return (sorted_a);
}

int	in_the_lowest_chunk(int a_elem, t_IntArr sorted_a, int chunk_size)
{
	int	in_chunk;
	int	index;

	in_chunk = 0;
	index = 0;
	while (index < chunk_size)
	{
		if (a_elem == sorted_a.array[index])
		{
			in_chunk = 1;
			break ;
		}
		index++;
	}
	return (in_chunk);
}

int	divide_and_push_to_b(t_IntArr *stack_a, t_IntArr *stack_b, int chunk_size)
{
	int			count;
	t_IntArr	sorted_a;

	sorted_a = generate_sorted_a(stack_a);
	count = 0;
	while (count < chunk_size && stack_a->size > 0)
	{
		while (in_the_lowest_chunk(stack_a->array[0],
				sorted_a, chunk_size) == 0)
			ra(stack_a);
		pb(stack_a, stack_b);
		count++;
	}
	free(sorted_a.array);
	return (count);
}

void	push_rest_to_a(t_IntArr *stack_a,
		t_IntArr *stack_b, int total_size, int chunk_size)
{
	int	iterations;
	int	left_in_chunk;

	left_in_chunk = chunk_size;
	iterations = total_size / chunk_size;
	while (iterations > 0 && stack_b->size > 0)
	{
		while (left_in_chunk > 0)
		{
			move_to_b(stack_b, get_index(stack_b, find_max(stack_b)));
			pa(stack_a, stack_b);
			left_in_chunk--;
		}
		left_in_chunk = chunk_size;
		iterations--;
	}
}

void	unlimited_numbers(t_IntArr *stack_a, t_IntArr *stack_b)
{
	int	last_chunk_size;
	int	chunk_size;
	int	total_size;

	total_size = stack_a->size;
	chunk_size = 10 + (total_size - 100) / 15;
	if (!stack_is_sorted(stack_a))
	{
		while (stack_a->size > 0)
			last_chunk_size = divide_and_push_to_b
				(stack_a, stack_b, chunk_size);
		while (last_chunk_size > 0)
		{
			move_to_b(stack_b, get_index(stack_b, find_max(stack_b)));
			pa(stack_a, stack_b);
			last_chunk_size--;
		}
		push_rest_to_a(stack_a, stack_b, total_size, chunk_size);
	}
}
