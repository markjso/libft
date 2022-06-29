/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:17:03 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 15:29:40 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** appends no more than n−strlen(src)−1 characters pointed to by src
** into the array pointed to by dst and always terminates the result with a null
** character if n is greater than zero. Both the strings src and dst
** must be terminated with a null character on entry to strlcat
** and a byte for the terminating null should be included in n.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	// initialise counters i & j and set them to zero so they start at the
	// beginning of each string. While we are not at the end of dst and i
	// is less than n then increment through dst
	while (dst[i] && i < n)
		i++;
	// while we are not at the end of src and the index of i + j + 1 is still
	// less than n then append the first character of src to dst and increment j
	// by 1. continue to loop until it breaks
	while (src[j] && (i + j + 1) < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	// now if i is less than n terminate dst and add the null to the end of the appended string
	// return the number of charcters of dst plus the appended length of src
	if (i < n)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
char src[] = "world";
char dst[] = "hello";
printf("src string is: %s/n", src);
printf("dst string is: %s/n", dst);
printf("new string is: %zu/n", ft_strlcat(dst, src, 5));
}*/
