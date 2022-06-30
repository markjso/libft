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
// the static int ft_setchar function holds the reference characters in set so they
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
	// initialize a new string s2 which will hold a copy of string s1
	// size_t i, start and finish act as counters. Set start to zero
	// so that it starts at the beginning of the string s1
	char	*s2;
	size_t	i;
	size_t	start;
	size_t	finish;

	start = 0;
	// while s1 is not null and set is not null and 
	// the first position of s1 matches the first character in set
	// (use ft_setchar to check) increment start and continue
	while (s1[start] && ft_setchar(s1[start], set))
		start++;
	// once the loop is broken set finish to be the size of s1
	finish = ft_strlen(s1);
	
	// while finish is greater than start look for the last character in set at the end of s1
	// decrement finish until set no longer matches
	
	// minus the set characters at the start of the string s1 plus 1 for the terminating '\0'
	while (finish > start && ft_setchar(s1[finish - 1], set))
			finish--;
	// allocate memory to new string s2 to be the size of the value in finish minus start
	// (this is the size what you trimmed in the fist loop and what is left in the previous loop)
	s2 = malloc(sizeof(*s1) * (finish - start + 1));
	// if the allocation fails return NULL
	if (!s2)
		return (NULL);
	// i is then set to 0
		i = 0;
	// while the count of start is less than the count of finish
	// copy the characters from the start position of s1 into the new string s2 at
	// position i. (this is the trimmed string)
	// increment i and start until the loop breaks
		while (start < finish)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	// null terminate the new string s2 and return it	
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
int main(void)
{
char *s1 = "this is the string this";
char *set = "this";

printf("the original string: %s\n", s1);
printf("the trimmed string: %s\n", ft_strtrim(s1, set));
}*/
