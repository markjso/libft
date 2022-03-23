/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:40:07 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 11:18:56 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** DESCRIPTION
** write zeros to a byte string. Writes n zeroed bytes to a string s.
** If n is zero bzero does nothing.
** Returns nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}
