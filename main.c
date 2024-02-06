/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:31:44 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/06 13:43:09 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	*str;
	int		*stack_a;
	int 	size_a;
	int		size_b;
	int		i;
	int 	*stack_b;
	
	i = 0;

	if (argc == 2)
	{	
		str = argv[1];
		if(validate_input(str) == 0)
			return(ft_printf("Error\n"),0);
		stack_a = store_input(str);
		size_a = check_size(stack_a);
		stack_b = create_stack_b(str);
		// sb(stack_b,size);
		// while (i < size)
		// 	ft_printf("%d ",stack_b[i++]);
	}
	else if(argc > 2)
	{
		str = create_str(argc, argv);
		if(validate_input(str) == 0)
			return(ft_printf("Error\n"),0);
		stack_a = store_input(str);
		
		stack_b = create_stack_b(str);
		size_b = check_size(stack_b);
		

		
		// ss(stack_a,stack_b);
		
		// sa(stack_a, size_a);
		// sb(stack_b,size_b);
		// ra(stack_a);
		// rb(stack_b);
		// rr(stack_a,stack_b);
		// rra(stack_a);
		// rrb(stack_b);
		
		pb(&stack_a, &stack_b);
		pb(&stack_a, &stack_b);
		pb(&stack_a, &stack_b);
		pb(&stack_a, &stack_b);
		// pb(&stack_a, &stack_b);

		// sb(stack_b,size_b);
		// rrr(stack_a, stack_b);
		// rrb(stack_b);
		// pa(&stack_a, &stack_b);
		while (stack_a[i])                //b_stak = {42,43,44,45}
			ft_printf("%d ",stack_a[i++]);
		i = 0;
		ft_printf("\n");
		
		while (stack_b[i])
			ft_printf("%d ",stack_b[i++]);
		ft_printf("\n");
	}
	
	return(0);
}