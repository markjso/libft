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
** Copy and concatenate src to the end of dst. It will append at most 
** n - strlen(dst) - 1 characters. Attempts to return the 
** total length of the dst plus the total length of the src string.
** If src and dst overlap the behaviour is undefined
*/
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	// initialise counters i & j and set them to zero so they start at the
	// beginning of each string. While we are not at the end of dst and i
	// is less than n then increment through and count the characters
	while (dst[i] && i < n)
		i++;
	// while we are not at the end of src and then index of i + j + 1 is still
	// less than n then continue to concatenate src to dst and count the number of
	// characters
	while (src[j] && (i + j + 1) < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	// once we have reached the number of characters of n, null terminate the string
	// return the number of charcters of dst plus src before it was terminated
	if (i != n)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
char src[] = "this is";
char dst[] = "a new string";
printf("src string is: %s/n", src);
printf("dst string is: %s/n", dst);
printf("new string is: %zu/n", ft_strlcat(dst, src, 10));
}*/
