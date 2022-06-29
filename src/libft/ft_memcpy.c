/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:06:59 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:08:47 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Copies n bytes from memory area src to memoray area dst. Returns the value of dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	//initialise three variables, i is the counter to perform the loop and move through the strings
	//and two char pointer variables to cast our src and dst to
	// set the counter to 0 and cast the paratmer strings to the char pointers csrc and cdst
	size_t	i;
	char	*csrc;
	char	*cdst;

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	// while is less than n enter the loop
	// i acts as the index postion and places the character at index postion of csrc into cdst
	// increment and continue until i is no longer less than n and then return cdst
	// if size of bytes copied from the src string is more than the dst string then it will only return these
	// else n bytes of the src string will be copied and the remaining characters in dst after n bytes will also be returned
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
/*
int main () {
   const char src[15] = "this is a string;
   char dest[15] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 5);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
