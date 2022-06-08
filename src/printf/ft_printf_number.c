/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:23:33 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 10:44:27 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function is used by the format specifiers i & d to print a signed 
 * base 10 number. The first if checks if num is negative and if so writes a
 * - using the ft_printf_char function, then declares n and gives it the value of
 * num multiplied by -1 (making it positve).
 *
 * If num is not negative then n is equal to it (as an unsigned int). Then if n is greater 
 * than or equal to 10 we recursively call ft_printf_number until n becomes a single digit. 
 * We then add '0' to it to make it a character value and use ft_printf_char to write it. 
 * We then return the count to ft_printf.*/
 
int	ft_printf_number(int num)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (num < 0)
	{
		count += ft_printf_char('-');
		n = (unsigned int)(num * -1);
	}
	else
		n = (unsigned int)num;
	if (n >= 10)
		count += ft_printf_number(n / 10);
		count += ft_printf_char(n % 10 + '0');
	return (count);
}
