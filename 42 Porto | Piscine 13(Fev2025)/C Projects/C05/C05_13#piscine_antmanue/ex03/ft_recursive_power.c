/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:08:56 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/08 21:08:57 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
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
	printf ("resultado: %i\n", ft_recursive_power(base, potencia));
	}
}*/
