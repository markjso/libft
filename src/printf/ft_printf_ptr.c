/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:49:02 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/02 16:36:15 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/* This function uses the ft_printf_hex function for the format specifier p
 * to print a pointer in hexadecimal format. We use ft_putstr_fd to write 
 * "0x" as it is hexadecimal, and increment count by two. We then use our ft_print
 * _hex function and use the lowercase hexadecimal as our base to print the value of the  
 * address of the ptr. We then return count to ft_printf.*/

int	ft_printf_ptr(void *ptr)
{
	int	count;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_printf_hex((size_t)ptr, "0123456789abcdef");
	return (count);
}
