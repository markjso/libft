/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:24:54 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 10:03:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this functiion will write the character string s to the file referenced by fd
// we use the ft_strlen function to ensure that the full length of the string
// including the null character is catered for

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
