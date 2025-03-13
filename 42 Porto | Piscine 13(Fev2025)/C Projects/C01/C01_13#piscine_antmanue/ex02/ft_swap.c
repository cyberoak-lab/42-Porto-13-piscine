/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:58:46 by antmanue          #+#    #+#             */
/*   Updated: 2025/02/27 14:59:00 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = (*b);
	*b = (temp_a);
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;
	
	printf ("Antes:\nValor de A:\n %d\nValor de B:\n%d\n", a, b);
	ft_swap(&a, &b);
	printf ("Depois:\nValor de A:\n %d\nValor de B:\n%d\n", a, b);
	return (0);
}*/
