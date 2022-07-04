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
// in this function a string is split into smaller arrays or substrings from a delimiter 
// character c the arrays are returned on separate lines and start from the first character 
// after the delimiter

static int	ft_wordcount(const char *str, char c)
{
	// first we create a function to count how often our delimter is found in the string
	// this is so we can allocate enough memory for the return sub strings
	// initialize count to move through the string
	size_t	count;
	
	
	if (!*str)
		return (0);
	count = 0;
	// while we have not reached the end of the string the loop continues
	// inside the loop is another loop that checks if the character at the index postion we are in
	// is the same as our delimiter c. If it is not then if str is not null, increment count by 1
	// Then there is another loop that runs if str does not equal the delimiter and string is not null
	// to keep moving through the string. When the delimiter is found the original loop is started again.
	// This continues until the end of the string is reached and then the count is returned to ft_split.
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
	// The first pointer contains the address of the second pointer, 
	// which points to the location that contains the actual substring 
	// we allocate memory for the first pointer based on the return value of the  
	// ft_wordcount function plus 1 for the terminating '\0'. 
	int	i;
	size_t	word_len;
	char	**split;

	split = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	// if the memory allocation fails or the string is empty return NULL
	if (!s || !split)
		return (NULL);
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
		// if it does than set word_len to equal the length of s before the delimiter	
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
		//else word_len equals the length of ft_strchr minus the length of s
		// split gets the substring starting from the position of i using
		// ft_substr and incrementing i to move through the string	
		// s is then incremented to the next character in the string s and the
		// loop starts again	
			else
				word_len = ft_strchr(s, c) - s;
			split[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	// one the end of the original string is reached 
	// add the terminating null to the first pointer and return the split string
	split[i] = '\0';
	return (split);
}
/*
int main()
{
    char string1[] = "abc defg abcdf";
    const char c = 'c';
    char **string;
    int i;
    i = 0;
    string = ft_split(string1, c);
    
    printf("original string is %s\n", string1);
    while (string[i] != '\0')
    {
      printf("%s\n", string[i]);
      i++;
    }
}*/
