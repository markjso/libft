/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:30 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/21 16:57:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this function applies the function parameter f to each character
// of the given string s from a specific index

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	// create a char pointer of str for the string to be returned to
	// int i to move through the string and int len to hold the size of the string s
	// i is zero to start at the beginning of the string s
	// len uses the ft_strlen function to get the length of s
	// allocate memory to str and make it longer by 1 than
	// the string s to compensate for the terminating '\0'
	// to copy the new string into
	
	char	*str;
	int		len;
	int		i;	

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	// if the allocation fails return NULL
	if (!str)
		return (NULL);
	// while i is less than len then apply the function f to each of the charcters of s
	// and set the result into the coressponding postion in the new string str
	// increment until we reach the end of s
	while (i < len)
	{
		str[i] = f(i, s[i]);
			i++;
	}
	// add a terminating '\0' to the new string str and return it
	str[len] = '\0';
	return (str);
}
/*
#include <stdio.h>
char f(unsigned int i, char c)
{
char str;
str = c + 1;
return (str);
}
int main()
{
char s[] = "0b%";
char* str;
str = ft_strmapi(s, *f);
printf("original string: %s\n", s);
printf("new string: %s\n", str);
}*/
