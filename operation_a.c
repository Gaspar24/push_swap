/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:47 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/05 15:44:51 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *stack_a,int size) //Works
{
	int	temp;
	
	if(size >= 2)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
	}
	else
		ft_printf("Error,les than 2 numbers in stack A!\n");
}


void pa(int **stack_a, int **stack_b)
{

    int i;
    int size_a = check_size(*stack_a);
    int size_b = check_size(*stack_b);
	
    if (size_b > 0)
    {	
	
        int *new_stack_a = expand_stack(*stack_a, size_a);
		// int j = 0;
    	// while ((*stack_b)[j])
    	// {
    	//     ft_printf("%d ", (*stack_b)[j++]);
	    // }
    	// ft_printf("\n");
        if (new_stack_a == NULL)
            return;
        free(*stack_a);
        *stack_a = new_stack_a;

        i = size_a;
        while (i > 0)
        {
            (*stack_a)[i] = (*stack_a)[i - 1];
            i--;
        }
        (*stack_a)[0] = (*stack_b)[0];
		
        int *new_stack_b = delete_index(*stack_b, size_b);
        if (new_stack_b == NULL)
            return;
        free(*stack_b);
        *stack_b = new_stack_b;	
    }
}
