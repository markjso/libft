/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:35:07 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:41:16 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Calculates the length of the string str up to, but not including, the
** terminating null character and returns the length.
*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	// while str is not null, increment through the string
	// (i + 1 each time)
	// return the value of i (the length of the string)
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int main () {
   char str[] = "this is a string";
   int len;

   len = ft_strlen(str);
   printf("Length of %s is: %d\n", str, len);
   
   return(0);
}*/
