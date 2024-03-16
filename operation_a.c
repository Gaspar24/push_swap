/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:47 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/16 11:29:19 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_IntArr *stack_a) //Works
{
	int	temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->array[0];
		stack_a->array[0] = stack_a->array[1];
		stack_a->array[1] = temp;
		ft_printf("sa\n");
	}
}

void	handle_stack_a(t_IntArr *stack_a, int first_element)
{
	int			i;
	t_IntArr	*new_stack_a;

	new_stack_a = expand_stack(stack_a);
	if (!new_stack_a)
		return ;
	free(stack_a->array);
	stack_a->array = new_stack_a->array;
	stack_a->size = new_stack_a->size;
	free(new_stack_a);
	i = stack_a->size - 1;
	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i - 1];
		i--;
	}
	stack_a->array[0] = first_element;
}

void	pa(t_IntArr *stack_a, t_IntArr *stack_b)
{
	t_IntArr	*new_stack_b;

	if (stack_b->size > 0)
	{
		handle_stack_a(stack_a, stack_b->array[0]);
		new_stack_b = delete_index(stack_b);
		if (!new_stack_b)
			return ;
		free(stack_b->array);
		stack_b->array = new_stack_b->array;
		stack_b->size = new_stack_b->size;
		free(new_stack_b);
		ft_printf("pa\n");
	}
}

void	ra(t_IntArr *stack_a)
{
	int	i;
	int	first_elem;

	i = 0;
	if (stack_a->size > 1)
	{
		first_elem = stack_a->array[0];
		while (i < stack_a->size - 1)
		{
			stack_a->array[i] = stack_a->array[i + 1];
			i++;
		}
		stack_a->array[stack_a->size - 1] = first_elem;
		ft_printf("ra\n");
	}
}

void	rra(t_IntArr *stack_a)
{
	int	i;
	int	last_elem;

	if (stack_a->size > 1)
	{
		last_elem = stack_a->array[stack_a->size - 1];
		i = stack_a->size - 1;
		while (i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = last_elem;
		ft_printf("rra\n");
	}
}
