/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:57:50 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/10 18:25:07 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putp_pf(void *ptr)
{
	unsigned long long	address;
	int					d_count;

	address = (unsigned long long)ptr;
	d_count = 2;
	write(1, "0x", 2);
	d_count += ft_putnbr_hex(address, 'x', 'p');
	return (d_count);
}
