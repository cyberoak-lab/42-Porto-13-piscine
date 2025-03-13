/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:50:52 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/08 19:51:05 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char	**argv)
{
	

	if (argc >= 2 && argc <= 3)
	{
		int base;
		int potencia;
		
		base = (atoi(argv[1]));
		potencia = (atoi(argv[2]));
	
	printf ("base: %i\n", base);
	printf ("potencia: %i\n", potencia);
	printf ("resultado: %i\n", ft_iterative_power(base, potencia));
	}
}*/
