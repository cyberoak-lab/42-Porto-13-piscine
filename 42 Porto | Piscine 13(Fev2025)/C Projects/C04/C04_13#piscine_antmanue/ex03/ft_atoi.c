/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:28:05 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/06 12:28:07 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if ((neg % 2) != 0)
		return (res * (-1));
	return (res);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc >= 2)
	printf ("Output:%d \n", ft_atoi(argv[1]));
	//printf ("Numero:%d \n", atoi(argv[1]));
	else
	{
	printf ("Error: Please insert a number as first argument!\n");
	}
	return(0);
}*/
