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
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	i = 0;
	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
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
