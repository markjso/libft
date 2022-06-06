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
	// size_t i and j will act as counters
	// allocate the memory for the new string to be len plus 1 for the 
	// terminating '\0'
	char	*sub_str;
	size_t	i;
	size_t	j;
	
	sub_str = (char *)malloc(len + 1);
	// if the allocation fails return NULL
	if (!s || !sub_str)
		return (0);
	i = start;
	j = 0;
		
	// while i (start) is less then the length of s AND j is less than len
	// then our sub string starts at the position in the value of start and continues
	// through until the value of len is reached. Terminate the substring str with '\0' and return the sub_str.
	while (i < ft_strlen(s) && j < len)
		sub_str[j++] = s[i++];
	sub_str[j] = '\0';
	return (sub_str);
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
