/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:07:29 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 11:14:45 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this functiion will write the character string s to the file referenced by fd
// followed by a new line '\n'
// we use the ft_strlen function to ensure that the full length of the string
// including the null character is catered for and ft_putchar_fd to have the
// string followed by a new line

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}
