/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:39:08 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/05 12:40:23 by msacaliu         ###   ########.fr       */
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

int *store_input(char *str)//works
{
	int	i;
	int	j;
	int	*stack_a;
	
	i = 0;
	j = 0;
	stack_a = (int*) malloc(count_nb(str) * sizeof(int));
	if(!stack_a)
		return(0);
	while (str[i])
	{
		if(str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
		else if((str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
		{
			stack_a[j] = ft_atoi(extract_nb(str, i));
			if (!stack_a)
				return(0);
			j++;
			i = i + ft_strlen_mod(&str[i]);
		}
	}
	stack_a[j] = '\0';
	return(stack_a);
}

int	*create_stack_b(char *str) //works
{
	int *stack_b;

	stack_b = (int*) malloc(count_nb(str) * sizeof(int));
	if(!stack_b)
		return (NULL);
	stack_b[0] = 42;
	stack_b[1] = 43;
	stack_b[2] = 44;
	stack_b[3] = 45;
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
	return(i);
}