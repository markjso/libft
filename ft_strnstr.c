/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:40:04 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 16:23:21 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locate a substring in a string.
** Locates the first occurrence of the string needle in the string haystack
** where not more than n characters are searched.
** If needle is an empty string, haystack is returned.
** If needle occurs nowhere in haystack, null is returned.
** Otherwise a pointer to the first character of the first occurence of 
** needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (needle == haystack)
		return (NULL);
	if (n == 0)
		return (NULL);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack [i + j] && needle[j] && i + j < n
			&& haystack[i + j] == needle[j])
		j++;
		if (!needle[j])
			return ((char *)haystack + i);
	i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>
int main()
{
    char haystack[] = "MZIRIBMZIRIBMZE123";
    char needle[] = "MZIRIBMZE";

    printf("needle is: %s\n", needle);
    printf("haystack is: %s\n", haystack);
    printf("is needle in haystack: %s\n", ft_strnstr(haystack, needle, 15));
 }*/
