/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:39:08 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/07 13:02:24 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int count_nb(char *str)//works
{
    int	i;
    int nb_count;
    int flag;

    flag = 0;
    i = 0;
    nb_count = 0;
    while (str[i])
    {
        while ((str[i] >= '0' && str[i] <='9') || str[i] == '-' || str[i] == '+')
        {
            flag = 1;
            i++;
        }
        if (flag)
        {
            nb_count += 1;
            flag = 0; 
        }
        while (str[i] && !((str[i] >= '0' && str[i] <='9') || str[i] == '-' || str[i] == '+'))
            i++;
    }
    return (nb_count);
}

char	*extract_nb(char *str ,int start)//works
{
	int		i;
	char	*nb;

	i = 0;
	nb = malloc(ft_strlen(&str[start]) + 1 *(sizeof(char)));
	if (!nb || !str)
		return(NULL);
	while (str[start] != ' ' && str[start] != '\t' && str[start] != '\0')
		nb[i++] = str[start++];
	nb[i] = '\0';
	return(nb);
}

IntArr create_stack_a(char *str)
{
    int i = 0;
    int j = 0;
    IntArr stack_a;

    stack_a.array = NULL;
    stack_a.size = 0;

    
    stack_a.array = (int *)calloc(count_nb(str), sizeof(int));
    if (!stack_a.array) {
        return stack_a; 
    }
    while (str[i])
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n') {
			i++;
	} 
		else if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
		{
            stack_a.array[j] = ft_atoi(extract_nb(str, i));
            j++;
            i = i + ft_strlen_mod(&str[i]);
        }
    }
    stack_a.size = j; 
    return stack_a;
}



IntArr create_stack_b(void) //works
{
	IntArr stack_b;

    stack_b.array = NULL;
    stack_b.size = 0;
	
	stack_b.array = (int *)malloc(sizeof(int));
	if(!stack_b.array)
		return (stack_b);
	// stack_b.array[0]= 42;
	// stack_b.array[1] = 43;
	// stack_b.array[2] = 44;
	// stack_b.array[3] = 45;
	// int i = 0;
	// while (stack_b.array[i])
	// {

	// 	stack_b.size += 1;
	// 	i++;
	// }
	
	return (stack_b);
}

int	check_size(int *stack)//works
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while(stack[i])
	{	
		i++;
		count++;
	}
	return(count);
	// return sizeof(stack) / sizeof(stack[0]);
}