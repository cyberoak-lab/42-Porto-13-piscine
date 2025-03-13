/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 06:53:02 by antmanue          #+#    #+#             */
/*   Updated: 2025/02/27 06:53:30 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = (*a / *b);
	*b = (temp_a % *b);
}
/*
int main(void)
{
	int a;
	int b;
    
    	a = 10;
    	b = 2;
    
	printf("Antes da Funcão:Valor de A:\n%d\nValor de B:\n%d\n", a,b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois da Funcão:Valor de A:\n%d\nValor de B:\n%d\n", a,b);

}*/
