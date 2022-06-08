/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:19:54 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 12:43:56 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function prints a string using ft_printf_char (incrementing with i) if the string 
 * is not null or using ft_putstr_fd if the string is null. It then returns the count
 * of i to ft_printf.*/

int	ft_printf_str(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i])
	{
		ft_printf_char(s[i]);
		i++;
	}
	return (i);
}
