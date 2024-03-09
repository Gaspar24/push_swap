/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:57:27 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/17 15:17:11 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *create_str(int argc, char *argv[])
{
    int		i;
    char	*str;
    int		total;
    int		j;
    int		k;
    
    k = 0;
    i = 1;
    total = 0;
    while (i < argc)
        total += ft_strlen(argv[i++]);
    total += argc - 1; 
    str = malloc((total + 1) * sizeof(char));
    if(!str)
        return(NULL);
    i = 1;
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
            str[k++] = argv[i][j++];
        if (i < argc - 1)
            str[k++] = ' ';
        i++;
    }
    str[k] = '\0';
    return(str);
}

int check_for_doubles(char *str)
{
    int    i;
    int    j;
    int    nb;
    int    *arr;
    
    i = 0;
    j = 0;
    nb = count_nb(str);
    arr = (int*)malloc(sizeof(int) * nb);
    while (str[i])
    {
        while ((str[i] >= '0' && str[i] <='9') || str[i] == '-' || str[i] == '+')
        {
            arr[j] = ft_atoi(&str[i]);
            j++;
            while ((str[i] >= '0' && str[i] <='9') || str[i] == '-' || str[i] == '+')
                i++;
        }
        while (str[i] && !((str[i] >= '0' && str[i] <='9') || str[i] == '-' || str[i] == '+'))
            i++;
    }
    i = 0;
    while (i < nb)
    {
        j = i + 1;
        while (j < nb)
        {
            if (arr[i] == arr[j])
            {
                free(arr);
                return(0);
            }
            j++;
        }
        i++;
    }
    free(arr);
    return(1);
}



int validate_input(char *str)
{
    int	i;
    
    i = 0;
    if (!check_for_doubles(str))
        return(0);
    while (str[i])
    {
        if(str[i] == ' ' || str[i] == '\t')
            i++;
        else if((str[i] == '0' && (str[i + 1] < '0' || str[i + 1] > '9')) 
        || (str[i] == '-' && str[i + 1] == '0' && (str[i + 2] < '0' || str[i + 2] > '9')) 
        || ((str[i] >= '1' && str[i] <= '9') || (str[i] == '-' && str[i + 1] >= '1' && str[i + 1] <= '9')
        || (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')))
            i++;
        else
            return(0);
    }
    return(1);
}