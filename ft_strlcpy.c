/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:25:12 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 14:04:18 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** copies up to n - 1 characters from the string src to dst, null terminating
** the result if n is not 0. Note that room for the null should be
** included in n.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	// i will count the characters in src
	size_t	i;
	
	i = 0;
	if (n > 0)
	{
		// while i is not at the end of src and is less than n - 1
		// copy src to dst and count the number of characters
		while (src[i] != '\0' && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		// null terminate the dst string
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	// return the length of i
	return (i);
}
