/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:39:51 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/13 09:39:57 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	str;
	
	if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
	if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}	
	if (nb > 9)
		ft_putnbr(nb / 10);
	str = (nb % 10) + '0';
	write(1, &str, 1);

}

int main (int argc, char	**argv)
{
	if (argc != 2)
		write(1, "Erro!", 5);
	else
	{
		ft_putnbr(atoi(argv[1]));
	}
}
