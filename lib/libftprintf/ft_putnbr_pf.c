/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:10:20 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/10 17:30:10 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count += 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_pf(int n)
{
	int	count;

	count = count_digits(n);
	if (n == -2147483648)
		return (ft_putstr_pf("-2147483648"));
	if (n < 0)
	{
		ft_putchar_pf('-');
		count += 1;
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_pf(n / 10);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_pf(n + '0');
	return (count);
}

// int main(void)
// {
// 	ft_putnbr_pf(1234);
// 	return (0);
// }