/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:18:30 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 15:09:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
// converts the integer n into a string of characters and returns a pointer
// is '\0' terminated
// if not valid will return NULL
// negative numbers should be managed
*/
#include "libft.h"

char	*ft_itoa(int nbr)
{
    int n;
    char *res;
    int len;
	
    n = nbr;
    len = 0;	
    if (nbr <= 0) // caters for if nbr is negative, will increment len to 1
    {
        len++;
    }
    while (n) // get the length of n to malloc res
    {
        n = n / 10;
        len++;
    }
    res = malloc(sizeof(char) * (len + 1));
    res[len] = '\0'; // adds the terminating null to result
    if (nbr == 0)
    {
        res[0] = '0'; // this will print 0
        return (res);
    }
    if (nbr < 0)
    {
        res[0] = '-'; // this will print the negative sign
        nbr = -nbr; // this will turn nbr to positive
    }
    while (nbr)
    {
        res[--len] = nbr % 10 + '0'; // decrement length and return result working backwards (modulus 10)
        nbr = nbr / 10; // reduce nbr by one on each decrementation
    }
    return (res);
}
/*
#include <stdio.h>
int main()
{
	int n  = -1567;
	printf("value of string  is: %d\n", n);
	printf("value with itoa is: %s\n", ft_itoa(n));
}*/
