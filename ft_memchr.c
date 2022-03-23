/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:15:30 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:32:52 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Locates the first occurrence of c (converted to unsigned char) in string s.
** Returns a pointer to the byte located, or NULL if no such byte exists
** within n bytes.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
