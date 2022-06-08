/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:34:55 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/13 19:36:11 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// allocates memory and returns a new string terminated by a '\0'
// which is a concatenation of s1 and s2. If the allocation fails return NULL

char	*ft_strjoin(char const *s1, char const *s2)
{
	// declare a char variable of dest to allocate memory to and return the
	// joined string. i and j will be the counters to move through the two strings
	// they are set to zero to start at the beginning of the strings
	// memory is allcated with the ft_strlen function to get the length of each 
	// string plus 1 for the terminating '\0'
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	// if the allocation fails return NULL
	// if not using i as the counter as long as we have not reached end of string s1 
	// place each character of s1 into dest until it is has reached the end then go to the next loop
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	// using counter j to place each character of s2 into dest at position i + j. This means it will start at
	// the end of the previous string and join this one to it. Once it reaches the end add a terminating '\0'
	// and return the joined string dest
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
