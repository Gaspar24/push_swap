/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:53 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/07 13:44:54 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(IntArr *stack_b) //Works
{
	int	temp;
	
	if(stack_b->size >= 2)
	{
		temp = stack_b->array[0];
		stack_b->array[0] = stack_b->array[1];
		stack_b->array[1] = temp;
		ft_printf("sa\n");
	}
	
}

void pb(IntArr *stack_a, IntArr *stack_b)
{
    int i;
    IntArr *new_stack_b;
    IntArr *new_stack_a;

    if (stack_a->size > 0)
    {
        new_stack_b = expand_stack(stack_b);
        if (!new_stack_b)
            return;
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
        stack_b->array[0] = stack_a->array[0];

        new_stack_a = delete_index(stack_a);
        if (!new_stack_a)
            return;
        free(stack_a->array);
        stack_a->array = new_stack_a->array;
        stack_a->size = new_stack_a->size;
        free(new_stack_a);
    }
}

void    rb(IntArr *stack_b)
{
	// int	size;
	int	i;
	int first_elem;

	i = 0;
	// size = check_size(stack_a);
	if(stack_b->size > 1)
	{
		first_elem = stack_b->array[0];
		while (i < stack_b->size - 1)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->size - 1] = first_elem;
		ft_printf("ra\n");
	}
	
}

void    rrb(IntArr *stack_b)
{

	int	i;
	int last_elem;
	
	if(stack_b->size > 1 )
	{
		last_elem = stack_b->array[stack_b->size - 1];
		i = stack_b->size - 1;
		while (i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = last_elem;
		ft_printf("rra\n");
	}
	
}