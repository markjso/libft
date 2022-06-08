/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:17:57 by jmarks            #+#    #+#             */
/*   Updated: 2022/04/27 13:11:16 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function prints a single character using the ft_putchar_fd function from 
 * libft (which uses the write function) and then returns one to be added to the 
 * total of characters printed by ft_printf. */

int	ft_printf_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
