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
// converts the integer n into a character string and returns a pointer
// is '\0' terminated
// if not valid will return NULL
// negative numbers should be managed
*/
#include "libft.h"

static int	ft_digitsize(int num)
{
	unsigned int	count;

	if (num == 0)
		return (1);
	count = 0;
	if (num < 0)
		count = count + 1;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_digitsize(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
		str[len] = '\0';
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
