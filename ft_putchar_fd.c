/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:06:05 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 10:01:10 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// a file descriptor (fd) is a number that tells certain functions where to input or output information to
// 0 is the standard input, 1 is the standard output and 2 is the standard error
// this functiion will write the char c to the file referenced by fd
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
