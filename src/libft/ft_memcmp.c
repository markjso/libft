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
** < 0 means s1 is less than s2.
** > 0 means s2 is less than s1.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	// create two char pointers to cast void s1 and s2 to
	// size_t i variable increments through the cast pointers src and dst and we also compare it to n
	// set i to equal 0 and cast s1 and s2 to src and dst
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	i = 0;
	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	// while i is less than n enter the loop
	// compare dst to src (which is really s2 to s1)
	// if they are the same increment through
	// if i is no longer less than n and we have not found any differing bytes return a 0
	// else return the ascii difference between the two unsigned char casts src and dst
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
/*
#include <stdio.h>

int main () {
   char str1[10] = "abcdef";
   char str2[10] = "ABCDEF";
   int ret;

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
