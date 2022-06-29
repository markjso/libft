/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:25:09 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 16:56:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** this function allocates sufficient memory for a copy of the string s1,
** does the copy and returns a pointer to it.
** the original string is fetched and then the malloc function allocates
** space for the duplicate + one character.
** if the memory allocation fails return NULL
** otherwise while len < x (the length of the string)
** the loop continues and the array of s1 is copied to s2
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		x;
	char	*s2;

	len = 0;
	x = ft_strlen(s1);
	s2 = malloc(sizeof(*s1) * (x + 1));
	if (!s2)
		return (NULL);
	while (len < x)
	{
		s2[len] = s1[len];
		len++;
	}
	s2[len] = '\0';
	return (s2);
}
/*
#include <stdio.h>
int main(void)
{
char s1[] = "Hello world!";
printf("this is the original string: %s\n", s1);
printf("this is the copied string s2: %s\n", ft_strdup(s1));
}*/
