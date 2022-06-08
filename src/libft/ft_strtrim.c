/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:39:02 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 11:46:08 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
// allocates memory and returns a copy of s1 with the characters in 'set' removed 
// from the beginning and the end of the string.
// if the allocation fails return NULL
// the ft_setchar function holds the reference characters in set so they
// can be removed.
// */
#include "libft.h"

static int	ft_setchar(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	// declare a new string s2 which will hold a copy of string s1
	// size_t i, start and finish act as counters. Set start to zero
	// so that it starts at the befinning of the string
	char	*s2;
	size_t	i;
	size_t	start;
	size_t	finish;

	start = 0;
	// while we are at the beginning of string s1 and we find our charcters in set
	// finish is the size of s1
	while (s1[start] && ft_setchar(s1[start], set))
		start++;
	finish = ft_strlen(s1);
	
	// while finish is greater than start and we find our characters at the end of s1
	// allocate memory to new string s2 to be the size of the set characters at the end of string s1
	// minus the set characters at the start of the string s1 plus 1 for the terminating '\0'
	while (finish > start && ft_setchar(s1[finish - 1], set))
			finish--;
	s2 = (char *)malloc(sizeof(*s1) * (finish - start + 1));
	// if the allocation fails return NULL
	if (!s2)
		return (NULL);
		i = 0;
	// while the count of start is less than the count of finish
	// copy the characters from the start position into the new string s2 at
	// position i. Keep copying until you reach the end of start
	// null terminate the new string s2 and return it
	while (start < finish)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
		s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
 57 int main(void)
 58 {
 59 char *s1 = "this is the string this";
 60 char *set = "this";
 61
 62 printf("the original string: %s\n", s1);
 63 printf("the trimmed string: %s\n", ft_strtrim(s1, set));
 64 }*/
