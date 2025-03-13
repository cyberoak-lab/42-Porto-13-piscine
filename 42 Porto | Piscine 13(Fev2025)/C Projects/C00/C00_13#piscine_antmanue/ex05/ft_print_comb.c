/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:53:51 by antmanue          #+#    #+#             */
/*   Updated: 2025/02/24 11:30:02 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	ft_numbr(char numbr, char numbr2, char numbr3)
{
	write(1, &numbr, 1);
	write(1, &numbr2, 1);
	write(1, &numbr3, 1);
	if (numbr < '7')
		write(1, ", ", 1);
	else
		write(1, "", 1);
}

void	ft_print_comb(void)
{
	char	numbr;
	char	numbr2;
	char	numbr3;

	numbr = '0';
	while (numbr <= '7')
	{
		numbr2 = numbr + 1;
		while (numbr2 <= '8')
		{
			numbr3 = numbr2 + 1;
			while (numbr3 <= '9')
			{
				ft_numbr(numbr, numbr2, numbr3);
				numbr3++;
			}
			numbr2++;
		}
		numbr++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
