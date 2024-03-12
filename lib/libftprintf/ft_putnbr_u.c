/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:20:46 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/10 17:43:30 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	count;
	unsigned int	temp;

	count = 0;
	temp = n;
	if (n == 0)
		count += 1;
	while (temp)
	{
		temp = temp / 10;
		count++;
	}
	if (n >= 10)
		ft_putnbr_u(n / 10);
	ft_putchar_pf((n % 10) + '0');
	return (count);
}

// int main(void)
// {
// 	ft_putnbru_pf(-4);
// 	printf("\n");
// 	// long long rez = put_power(2,32);
// 	// printf("%lld",rez);
// 	printf("%u",-4);
// 	return (0);
// }