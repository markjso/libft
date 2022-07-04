/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:38:07 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 15:06:55 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// in this function a string is cut into smaller arrays or substrings from a delimiter character c
// the arrays are returned on separate lines and start from the first character 
// before and after the delimiter

static int	ft_wordcount(const char *str, char c)
{
	// first we create a function to count how many words are in the string
	// this is so we can allocate enough memory for the return sub strings
	// declare i to move through the string and wrd to count the workds
	size_t	count;
	
	// loop continues so long as we have not reached the end of the string
	// inside the loop is another loop that continues if the index postion we are in
	// is the same as our delimiter c. If the end of the string is not reached after passing
	// the c character then increase the wrd counter. Then there is another loop that passes
	// over all the characters until we find another instance of the character c
	// the loop will start again if the end of the string has not been reached
	// once it has it returns the number of words and how many sub strings we need
	if (!*str)
		return (0);
	count = 0;
	while(*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	// We have two counters to pinpont index postions in the parameter string s.
	// We also have a char pointer to a pointer, split to return our substrings.
	// we allocate memory for the substrings based on the ft_wordcount function plus 1 for the
	// terminating '\0'. 
	int	i;
	size_t	word_len;
	char	**split;

	split = malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	// if the memory allocation fails return 0
	if (!s || !split)
		return (0);
	i = 0;
	// now we go into a loop. As long as s is not null it will continue to the next while loop.
	// First check to see if the index position we are in is the same as our delimiter c 
	// if it is not increment s
	while (*s)
	{
		while (*s == c && *s)
			s++;
		// if it is the terminating null 
		if (*s)
		// then check if the string contains the delimiter using ft_strchr.
		// if it does than set word_len to equal the length of s	
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
		//else word_len equals the length of ft_strchr - the length of s
		// split equals the new substring starting from the position of i
		// s equals word_len plus s	
			else
				word_len = ft_strchr(s, c) - s;
			split[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	// add the terminating null and return split
	split[i] = '\0';
	return (split);
}
/*
int main(void)
{
	char **tab  = ft_split ("this, is, a, string", 'i');
	unsigned int i;
	i = 0;
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}*/
