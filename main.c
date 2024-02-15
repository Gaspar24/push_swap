/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:31:44 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/15 15:22:10 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char *argv[])
{
	char	*str;
	IntArr	stack_a;
	int		i;
	IntArr 	stack_b;
	
	i = 0;

	if (argc == 2)
	{	
		str = argv[1];
		if(validate_input(str) == 0)
			return(ft_printf("Error\n"),0);
		stack_a = create_stack_a(str);
		stack_b = create_stack_b();
		if(!stack_is_sorted(&stack_a))
		{
			if(stack_a.size == 2)
				two_numbers(&stack_a);
			if(stack_a.size == 3)
				three_numbers(&stack_a);
			// if(stack_a.size == 5)
			// 	five_numbers(&stack_a, &stack_b);
			else
				unlimited_numbers(&stack_a, &stack_b);
		
		}	
	
	}
	else if(argc > 2)
	{
		str = create_str(argc, argv);
		if(validate_input(str) == 0)
			return(ft_printf("Error\n"),0);
		stack_a = create_stack_a(str);
		stack_b = create_stack_b();
		if(!stack_is_sorted(&stack_a))
		{
			if(stack_a.size == 2)
				two_numbers(&stack_a);
			if(stack_a.size == 3)
				three_numbers(&stack_a);
			// if(stack_a.size == 5)
			// 	five_numbers(&stack_a, &stack_b);
			else
				unlimited_numbers(&stack_a, &stack_b);
		
		}	
		
	
		
	}

	return(0);
}