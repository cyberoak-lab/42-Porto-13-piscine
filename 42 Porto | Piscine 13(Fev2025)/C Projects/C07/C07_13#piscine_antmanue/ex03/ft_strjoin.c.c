/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:34:43 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/11 17:52:55 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arrdest;
	int	i;

	i = 0;
	arrdest = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		arrdest = NULL;
		return (0);
	}
	while (min < max)
	{
		arrdest[i] = min;
		i++;
		min++;
	}
	return (arrdest);
}
/*
int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	size = max - min;

	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}*/
