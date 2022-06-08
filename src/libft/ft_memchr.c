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
	// i = 0 so that we start at the beginning or our string s
	// while our i variable is less than the parameter n our loop will continue
	// cast our void s to a char s and check if the current index postion is equal to c
	// if true will return a pointer to the indes position that contains c
	// if is no longer less than n return NULL
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
