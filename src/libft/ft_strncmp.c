/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:31:18 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 11:52:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Compares at most the first n bytes of s1 and s2.
** Returns value 0 if bytes are equal.
** Else returns < or > 0 difference.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	// declare a counter variable of i
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	i = 0;
	// cast the constant char s1 and s2 to unsigned chars
	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	// while i is less than n or we are not at the end of src or dst
	// check to see if the character at position i in src is the same
	// as the character at position i in dst and if so continue the loop
	// and return 0 if you get to the end
	// else if it is not then return the difference between the current
	// character in src at position i from the current character in dest at
	// position i
	while ((i < n) && (src[i] != '\0' || dst[i] != '\0'))
	{
		if (dst[i] == src[i])
		{
			i++;
		}
		else if (src[i] != dst[i])
			return (src[i] - dst[i]);
	}
	return (0);
}
