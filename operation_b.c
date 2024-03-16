/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:53 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/16 11:28:59 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_IntArr *stack_b) //Works
{
	int	temp;

	if (stack_b->size >= 2)
	{
		temp = stack_b->array[0];
		stack_b->array[0] = stack_b->array[1];
		stack_b->array[1] = temp;
		ft_printf("sa\n");
	}
}

void	expand_and_shift_b(t_IntArr *stack_b, int first_element)
{
	int			i;
	t_IntArr	*new_stack_b;

	new_stack_b = expand_stack(stack_b);
	if (!new_stack_b)
		return ;
	free(stack_b->array);
	stack_b->array = new_stack_b->array;
	stack_b->size = new_stack_b->size;
	free(new_stack_b);
	i = stack_b->size - 1;
	while (i > 0)
	{
		stack_b->array[i] = stack_b->array[i - 1];
		i--;
	}
	stack_b->array[0] = first_element;
}

void	pb(t_IntArr *stack_a, t_IntArr *stack_b)
{
	t_IntArr	*new_stack_a;

	if (stack_a->size > 0)
	{
		expand_and_shift_b(stack_b, stack_a->array[0]);
		new_stack_a = delete_index(stack_a);
		if (!new_stack_a)
			return ;
		free(stack_a->array);
		stack_a->array = new_stack_a->array;
		stack_a->size = new_stack_a->size;
		free(new_stack_a);
		ft_printf("pb\n");
	}
}

// void	pb(t_IntArr *stack_a, t_IntArr *stack_b)
// {
// 	int			i;
// 	t_IntArr	*new_stack_b;
// 	t_IntArr	*new_stack_a;

// 	if (stack_a->size > 0)
// 	{
// 		new_stack_b = expand_stack(stack_b);
// 		if (!new_stack_b)
// 			return ;
// 		free(stack_b->array);
// 		stack_b->array = new_stack_b->array;
// 		stack_b->size = new_stack_b->size;
// 		free(new_stack_b);
// 		i = stack_b->size - 1;
// 		while (i > 0)
// 		{
// 			stack_b->array[i] = stack_b->array[i - 1];
// 			i--;
// 		}
// 		stack_b->array[0] = stack_a->array[0];
// 		new_stack_a = delete_index(stack_a);
// 		if (!new_stack_a)
// 			return ;
// 		free(stack_a->array);
// 		stack_a->array = new_stack_a->array;
// 		stack_a->size = new_stack_a->size;
// 		free(new_stack_a);
// 		ft_printf("pb\n");
// 	}
// }

void	rb(t_IntArr *stack_b)
{
	int	i;
	int	first_elem;

	i = 0;
	if (stack_b->size > 1)
	{
		first_elem = stack_b->array[0];
		while (i < stack_b->size - 1)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->size - 1] = first_elem;
		ft_printf("rb\n");
	}
}

void	rrb(t_IntArr *stack_b)
{
	int	i;
	int	last_elem;

	if (stack_b->size > 1)
	{
		last_elem = stack_b->array[stack_b->size - 1];
		i = stack_b->size - 1;
		while (i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = last_elem;
		ft_printf("rrb\n");
	}
}
