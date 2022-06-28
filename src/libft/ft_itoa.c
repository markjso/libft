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

// first we work out how long our int is. This is so we can allocate the correct amount of memory.
// we want the smallest size possible so we convert the int numb into a one digit number
static int	ft_digitsize(int num)
{
		unsigned int	count;

	if (num == 0)
		return (1);
	count = 0;
	// if it's a negative number, make it positive
	if (num < 0)
		count = count + 1;
	// if it's not zero, then divide it by 10 and loop through again until num is a single digit
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	// create a char pointer variable called str that will be returned
	// use unsigned int of num to cut n into single digits so that a char can be created with each of them
	// use unsigned int of len that will use the ft_digitsize function to work out the length of n
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_digitsize(n);
	// allocate memory based on the size of len plus one for the null terminated character 
	// if the allocation fails return NULL
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	// if n is less than zero (negative) turn it into a positive
	// num is now intillised as -n to make it positive (minus minus = plus)
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	// if n is positive than num is positive n
	else
		num = n;
	// if num (or n) is zero make it characer '0' and make the length null
	if (num == 0)
		str[0] = '0';
		str[len] = '\0';
	// if it's not zero then end of the string str (len - 1) is num % 10 + '0' which adds the ascii value of the char '0' (48)
	//  so we can get a char array. num /10 removes the last digit as we got this from num % 10
	// then decrement the loop until we reach zero and return the pointer str.
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[]  = '-1567';
	printf("value of string  is: %d\n", str);
	printf("value with itoa is: %s\n", ft_itoa(n));
}*/
