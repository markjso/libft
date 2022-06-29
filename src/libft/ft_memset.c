/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:51:02 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:22:37 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Copies n bytles of the character c (an unsigned char) to the string pointed to by str.
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	// create a char pointer s to hold a cast version of void str
	char	*s;

	s = (char *)str;
	// while n is greater than 0 we continue the loop
	// place the variable of int c into the first index position of *s (or str)
	// increment s
	// decrement n until it is no longer greater than 0 and the loop ends
	// return str
	// if str is longer than the value of n the remainder of str will also be returned
	while (n > 0)
	{
		*s = c;
		s++;
		n--;
	}
	return (str);
}
/*
int main () {
   char str[15] = "hello cruel world";

   printf("This is the string = %s\n", str);
   ft_memset(str,'$',7);
   printf("this is the string now = %s\n", str);
   
   return(0);
}*/
