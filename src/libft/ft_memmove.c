/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:06:56 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:11:44 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** copies n bytes from src string to dst string. The two strings may overlap.
** returns dst
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	// we call a variable of i to compare to n
	// if the length of dst string is greater than src string and while n is greater than zero
	// go to the index position of the end of the src string and copy this into the same position
	// of the dst string. decrement until n is less than zero (or the start of the src string)
	// return dst
	
	if (dst > src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	// else i is set to 0 or the start of the string
	// while i is less than n the loop continues
	// the char cast of src is copied into the char cast of dst starting
	// from the first character up to the lenght of n. Return dst.
	// if the value of n is less than the length of the string dst
	// then the remaining characters in the string will also be returned.
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i);
		i++;
		}
	}
	return (dst);
}

int main () {
   char dst[] = "the dest";
   const char src[]  = "our src string";

   printf("Before memmove dest = %s, src = %s\n", dst, src);
   ft_memmove(dst, src, 9);
   printf("After memmove dest = %s, src = %s\n", dst, src);

   return(0);
}
