/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:04:20 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 11:05:53 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// // this functiion will write the int n to the file referenced by fd
void	ft_putnbr_fd(int n, int fd)
{
	// if -2147483648 (largest int) is passed then return it as our function can not able to handle it
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	// else if it is another negative number then use ft_putchar_fd('-') to display the minus sign
	// then call ft_putnbr_fd again on a negative version of n to make it positive
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	// else if n is less than 10 we will add '0' to the int to give it a character value and use ft_putchar_fd to display it
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
	// if it greater then 10 then we break it down recursively to individual digits
	// we do this by using / 10 and % 10
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
