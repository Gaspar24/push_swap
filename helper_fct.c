/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_fct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:06:47 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/05 15:42:36 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int ft_strlen_mod(char *str)
{
	int	i;
	
	i = 0;
	while ((str[i] != '\t' && str[i] != ' ' && str[i] != '\n') && str[i])
		i++;
	return(i);
}

int	*expand_stack(int *stack, int size)
{
    int i;
    int	*new_stack;
	int new_size;

    i = 0;
    new_size = size + 1;
    new_stack = malloc(new_size * sizeof(int*));
    if(!new_stack)
        return(0);
    while (i < new_size - 1) 
    {
        new_stack[i] = stack[i];
        i++;
    }
    // new_stack[i] = 0; 
    return(new_stack);	
}


int *delete_index(int *stack, int size)
{
	int i;
    int	*new_stack;
	int new_size;
	int	j;
    
    i = 1;
	j = 0;
    new_size = size - 1;
    new_stack =  malloc(new_size * sizeof(int*));
    if(!new_stack)
        return(0);
    while (stack[i]) 
    {
        new_stack[j] = stack[i];
        i++;
		j++;
    }
    return(new_stack);	
}
