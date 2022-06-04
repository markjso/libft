/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:25:36 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/21 10:09:52 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// allocates memory and returns a new copy of a portion of the string s
// this substring begins at start and will have the lenth of len
// if the memory allocation fails return NULL

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	// declare a char pointer str to hold our substring
	// unsigned int i and j will act as counters and will start at zero
	// allocate the memory for the new string to be len plus 1 for the 
	// terminating '\0'
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	// if the allocation fails return NULL
	if (!str)
		return (NULL);
	
	// until we reach the end of string s, if i is greater than start and j is less 
	// than len copy the number of characters of len from string s at position
	// start into string str. Terminate the substring str with '\0' and return the substring str
	while (s[i])
	{
		if (i >= start && j < len)
		{
		str[j] = s[i];
		j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
 40 int main()
 41 {
 42     char s[] = "substr function Implementation";
 43
 44     printf("string s is: %s\n", s);
 45     printf("substring is: %s\n", ft_substr(s, 5, 10));
 46 }*/
