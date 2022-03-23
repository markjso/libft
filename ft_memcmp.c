/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:07:41 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 11:58:33 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcmp function compares the first n bytes of memory area 
** in s1 against s2. Returns 0 if they are equal.
** Otherwise returns the difference between the first two differing bytes.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	// create two char pointers to cast void s1 and s2 to
	// size_t i variable counts through the src and dst and we also compare it to n
	// set i to equal 0 and cast s1 and s2 int src and dst
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	i = 0;
	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	// as long as i is less than n the loop continues
	// if i is no longer less than n and we have not found any differing bytes return a 0
	// else return the difference between the two unsigned char casts
	while (i < n)
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
