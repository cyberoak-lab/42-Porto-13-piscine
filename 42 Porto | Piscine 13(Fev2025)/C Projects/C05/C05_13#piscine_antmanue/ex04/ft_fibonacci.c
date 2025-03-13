/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:23:03 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/08 21:23:04 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci (index -1) + ft_fibonacci (index - 2));
}
/*
#include <stdio.h>

int 	main(void)
{
	printf ("FibNaruto: %i\n", ft_fibonacci(26));
}*/
