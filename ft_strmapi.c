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
// this function  applies the function parameter f to each character
// of the given string s from a specific index

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	// create a variable of str for the string to be returned
	// int i to move through the string and int len to hold the size of s
	// i is zero to start at the beginning of the string
	// len uses the ft_strlen function to get the length of s
	// allocate the memory to str to make a copy of the new string and make
	// it longer by 1 than the string s to compensate for the terminating '\0'
	// if the allocatio fails return NULL
	char	*str;
	int		len;
	int		i;	

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	// if i is less than len then apply the function f to each of the charcters of f
	// and set the result into the coressponding postion in the new string str
	// add a terminating '\0' once we reach the end of s and return the new string str
	while (i < len)
	{
		str[i] = f(i, s[i]);
			i++;
	}
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
char s[] = "abc";
char* str;
str = ft_strmapi(s, *f);
printf("original string: %s\n", s);
printf("new string: %s\n", str);
}*/
