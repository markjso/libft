/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:33 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 11:11:53 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function is used by format specifier u to print an unsigned decimal number.
 * If num is greater than or equal to 10 we recursively call ft_printf_number until
 * num becomes a single digit. We then add '0' to it to make it a character value and
 * use ft_printf_char to write it. We then return the count to ft_printf*/

int	ft_printf_u(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_printf_number(num / 10);
		count += ft_printf_char(num % 10 + '0');
	return (count);
}
