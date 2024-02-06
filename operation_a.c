/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:47 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/06 13:07:18 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *stack_a,int size) //Works
{
	int	temp;
	
	size = check_size(stack_a);
	if(size >= 2)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
		ft_printf("sa\n");
	}
	
}


void	pa(int **stack_a, int **stack_b)
{
    int i;

	
    if (check_size(*stack_b) > 0)
    {		
        int *new_stack_a = expand_stack(*stack_a);
        if (new_stack_a == NULL)
            return;
        // free(*stack_a);
        *stack_a = new_stack_a;
        i = check_size(*stack_a);
        while (i > 0)
        {
            (*stack_a)[i] = (*stack_a)[i - 1];
            i--;
        }
        (*stack_a)[0] = (*stack_b)[0];

        int *new_stack_b = delete_index(*stack_b);
        if (new_stack_b == NULL)
            return;
        // free(*stack_b);
        *stack_b = new_stack_b;	
        ft_printf("pa\n");
    }
}

void    ra(int *stack_a)
{
	int	size;
	int	i;
	int first_elem;

	i = 0;
	size = check_size(stack_a);
	if(size > 1)
	{
		first_elem = stack_a[0];
		while (i < size - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[size - 1] = first_elem;
		ft_printf("ra\n");
	}
	
}

void    rra(int *stack_a)
{
	int	size;
	int	i;
	int last_elem;
	
	size = check_size(stack_a);
	if(size > 1 )
	{
		last_elem = stack_a[size - 1];
		i = size - 1;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = last_elem;
		ft_printf("rra\n");
	}
	
}
