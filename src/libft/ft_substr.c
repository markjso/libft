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
// this substring begins at start and will have the length of len
// if the memory allocation fails return NULL

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	// initialise a char pointer sub_str to hold our substring
	// size_t i and j will act as counters
	// allocate the memory for the new string to be len plus 1 for the 
	// terminating '\0'
	char	*sub_str;
	size_t	i;
	size_t	j;
	
	sub_str = malloc(sizeof(*s) * (len + 1));
	// if the allocation fails return NULL
	if (!sub_str)
		return (NULL);
	i = 0;
	j = 0;
	// while s (with the value of i) is not null the loop keeps going
	// if i is greater than or equal to the length of start AND j is less than len
	// then our sub string is copied from string starting at the position in i
	// j is incremented until it is the same value as len and the loop is broken
	// otherwise i is incremented and the loop is entered again until i is >= to start
	// terminate the substring str with '\0' and return the sub_str.
	while (s[i])
	{
		if (i >= start && j < len)
		{
		sub_str[j] = s[i];
		j++;
		}
	i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
/*
#include <stdio.h>
int main()
{
    char s[] = "substr function Implementation";

     printf("string s is: %s\n", s);
     printf("substring is: %s\n", ft_substr(s, 5, 10));
}*/
