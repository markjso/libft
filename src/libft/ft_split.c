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
// in this function a string is cut into an array or substrings from a delimiter character c
// the array's are returned on separate lines and start from the first character 
// before and after the delimiter

static int	ft_wordcount(const char *str, char c)
{
	// first we create a function to count how many words are in the string
	// this is so we can allocate enough memory for the return sub strings
	// declare i to move through the string and wrd to count the workds
	size_t	count:
	
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
	// now we do the ft_split function. We have two counters to pinpont index postions in
	// the parameter string s. We also have a char pointer split to return our substrings.
	// we allocate memory for the substrings based on the ft_wordcount function plus 1 for the
	// terminating '\0'. 
	int	i;
	size_t	word_len;
	char	**split;

	split = malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	if (!s || !split)
		return (0);
	i = 0;
	// now we go into a loop. As long as it is not the terminating null
	// it will continue to the next while loop. It first checks to see if the index position 
	// we are in is the same as our delimiter c and that s is not at the terminating null. If 
	// it is the terminating null then check if the string contains the delimiter using ft_strchr.
	// If it does not then word_len is equal to the length of s. Otherwise word_len uses ft_strchr
	// to create a substring from the point of the delimiter onwards. Split then uses ft_substr
	// to return the new strings starting from the position of i = 0 and using the length  
	// returned by ft_strlen. Then add a terminating 0 and return the substrings split.
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			split[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	split[i] = NULL;
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
