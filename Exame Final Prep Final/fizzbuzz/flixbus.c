/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:09:00 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/13 10:09:03 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);



void	ft_putnbr(int n)
{
	char	strnbr;
	
	if	(n > 9)
		ft_putnbr(n / 10);
	strnbr = (n % 10) + '0';
	write(1, &strnbr, 1);
}

int	main(void)
{
	int n;

	n = 1;
	
	while (n <= 100)
		{
		if ((n % 3 == 0) && (n % 5 ==0))
			write (1, "FlixBus", 7);
		else if (n % 3 == 0)
			write (1, "Flix", 4);
		else if (n % 5 == 0)
			write (1, "Bus", 3);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
		}
}
