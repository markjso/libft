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

	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	// if the allocation fails return NULL
	if (!s1 || !s2 ||!dest)
		return (NULL);
	i = 0;
	j = 0;
	// while we are not at the terminating null of s1 copy each character of s1
	// into dest and increment i unitl you reach the end of s1 and break the loop
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	// while we are not at the terminating null of s2 copy each character of s2 into dest at position i. 
	// This means it will start at the end of the previous string and join this one to it. 
	// increment both i and j until you reach the end of s2 and break the loop
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	// Once it reaches the end add a terminating '\0' to dest
	// and return the joined string dest.
	dest[i] = '\0';
	return (dest);
}
/*
int main() {
  char init[] = "this is init";
  char add[] = " added now";
  char *ret;
   
   ret = ft_strjoin(init, add);

   printf("String1 is = %s\n", init);
   printf("string2 is = %s\n", add);
   printf("String after join is = %s\n", ret);
}*/
