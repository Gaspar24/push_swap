/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:53 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/06 13:42:03 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(int *stack_b,int size)
{
	int	temp;
    size = check_size(stack_b);
	if(size > 1)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
		ft_printf("sb\n");
	}

}

void pb(int **stack_a, int **stack_b)
{
    int i;
    int size_b;

    
    if (check_size(*stack_a) > 0)
    {
        int *new_stack_b = expand_stack(*stack_b);
        if (new_stack_b == NULL)
            return;
        // free(stack_b);
        *stack_b = new_stack_b;
        size_b = check_size(*stack_b);
        ft_printf(" size_b = %d\n",size_b);
        i = size_b;
        while (i > 0)
        {
            (*stack_b)[i] = (*stack_b)[i - 1];
            i--;
        }
        (*stack_b)[0] = (*stack_a)[0];
        int *new_stack_a = delete_index(*stack_a);
        if (new_stack_a == NULL)
            return;
        // free(*stack_a);
        *stack_a = new_stack_a;
        int size_a = check_size(*stack_a);
        ft_printf(" size_a = %d\n",size_a);
        ft_printf("pb\n");
    }
}

void    rb(int *stack_b)
{
	int	size;
	int	i;
	int first_elem;

	i = 0;
	size = check_size(stack_b);
	if(size > 1)
	{
		first_elem = stack_b[0];
		while (i < size - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[size - 1] = first_elem;
        ft_printf("rb\n");
	}
	
	
}

void    rrb(int *stack_b)
{
	int	size;
	int	i;
	int last_elem;
	
	size = check_size(stack_b);
	if(size > 1 )
	{
		last_elem = stack_b[size - 1];
		i = size - 1;
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = last_elem;
        ft_printf("rrb\n");
	}
	
}