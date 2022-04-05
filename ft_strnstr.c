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

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
     size_t  h;
     size_t  n;

     h = 0;
     // first check to see if needle is an empty string and if it is return haystack
     if (ft_strlen(needle) == '\0')
         return ((char *)haystack);
     // while we are at the start of haystack initalise the first position in needle
     while (haystack[h] != '\0')
     {
         n = 0;
        // while the index position in haystack is equal to the index position of needle and less than the length of len
        // if haystack is equal to needle within then return a pointer to haystack from 
        // the index point it matches at, otherwise keep imcrementing through needle
         while (haystack[h + n] == needle[n] && (h + n) < len)
         {
             if (haystack[h + n] == '\0' && needle[n] == '\0')
             return ((char*)&haystack[h]);
         n++;
         }
      // once you are at the end of needle increment through the rest of haystack and return the rest of the
      // haystack string    
     if (needle[n] == '\0')
         return ((char*)haystack + h);
     h++;
     }
     // otherwise return null
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
