/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:45:08 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/13 16:54:40 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Converts ASCII str to an integer (type int). If no valid conversion can be 
** perfomred return 0.
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	// skip over any kind of spacing that might be at the start of the string
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
	{
		i++;
	}
	//check to see if there is a negative symbol at the beginning
	//if negative we set sign to equal -1 to multiply our result when we return it
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
			i++;
	}
	// convert the string from char to int if they are numbers
	// first multiply res by 10 to set up the digit
	// then subtract the numerical value of the character '0' on the ascic table (48)	
	// this sets it to ascii numerical value 
	// Loop until we hit a character that is not a number
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
			i++;
	}
	// return res multiplied by sign to return a positive or negative number (int)
	return (res * sign);
}
