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
	unsigned int	i;
	int				wrd;

	i = 0;
	wrd = 0;
	// loop continues so long as we have not reached the end of the string
	// inside the loop is another loop that continues if the index postion we are in
	// is the same as our delimiter c. If the end of the string is not reached after passing
	// the c character then increase the wrd counter. Then there is another loop that passes
	// over all the characters until we find another instance of the character c
	// the loop will start again if the end of the string has not been reached
	// once it has it returns the number of words and how many sub strings we need
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			wrd++;
		while (str[i] && (str[i] != c))
			i++;
	}
	return (wrd);
}

static char	*ft_copyword(char const *s, int start, int finish)
{
	// this function creates a copy to a pointer of each word or substring 
	// of s and allocates enough memory for each one by using the 
	// parameters start and finish. We add 1 to this in the malloc
	// function to ensure space for the terminating '\0' charachter
	// we copy this into a substring called word and use i to continue through
	// the index while start is less than finish. When this condition is no longer
	// met we null terminate and return word
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}	

char	**ft_split(char const *s, char c)
{
	// now we do the ft_split function. We have three counters to pinpont index postions in
	// the parameter string s. We also have a char pointer split to return our substrings.
	// we allocate memory for the substrings based on the ft_wordcount function plus 1 for the
	// terminating '\0'. 
	size_t	i;
	int		j;
	int		index;
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	i = 0;
	j = 0;
	index = -1;
	// now we go into a loop using the counter i. As long as i is less than the length of s
	// it will continue. It first checks to see if the index position we are in is the same as our
	// delimiter c and that index is less than zero (index is currently -1). If it is not then 
	// continue through the index. Else, if the character is the same as c, or i is at the end of the string
	// or index is greater than or equal to zero, then use the counter j to create a substring using 
	// the ft_copyword function and reset index to -1. Then add a terminating 0 and return the substrings split
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_copyword(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
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
