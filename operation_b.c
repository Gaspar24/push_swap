/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:13:53 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/05 14:43:05 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(int *stack_b,int size)
{
	int	temp;
	if(size >= 2)
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
    int size_a = check_size(*stack_a);
    int size_b = check_size(*stack_b);
    if (size_a > 0)
    {
        int *new_stack_b = expand_stack(*stack_b, size_b);
        if (new_stack_b == NULL)
            return;
        free(*stack_b);
        *stack_b = new_stack_b;

        i = size_b;
        while (i > 0)
        {
            (*stack_b)[i] = (*stack_b)[i - 1];
            i--;
        }
        (*stack_b)[0] = (*stack_a)[0];
        int *new_stack_a = delete_index(*stack_a, size_a);
        if (new_stack_a == NULL)
            return;
        free(*stack_a);
        *stack_a = new_stack_a;
	
		
		
    }
	
}