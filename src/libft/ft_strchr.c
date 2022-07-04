/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:32:55 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:42:38 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Searches for the first occurance of the unsigned character c in the
** string pointed to by the argument str. Returns a pointer to the first
** occurence of the character c in the string, or NULL if not found.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	// while *str is not null the loop continues
	// if the variable in int c is found in *str
	// if int c is not found and it is not the end of str
	// increment str. When int c is found in str return str from this point on. 
	while(*str)
	{
		if (*str == (char) c)
		    return ((char *)str);
		str++;
	}
	// if you reach the end of the string and the variable in int c
	// is found then return str from this point on
	// otherwise if int c is null return the char str.
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int main () {
   const char str[] = "Today. Tonight. Always";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);
   printf("String is = %s\n", str);
   printf("charcter is = %c\n", ch);
   printf("String after %c is = %s\n", ch, ret);
   
   return(0);
}*/
