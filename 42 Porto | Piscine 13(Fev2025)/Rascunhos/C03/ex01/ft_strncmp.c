/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:03:52 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/03 12:03:57 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned	int n);

int	ft_strncmp(char	*s1, char *s2, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || (s2[i]) != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*string1;
	char	*string2;
	unsigned int	n;
	
	string1 = "aa";
	string2 = "aab" ;
	n = 5;
	
	printf("%i\n", ft_strncmp(string1, string2, n));
}*/
