/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 03:13:57 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/22 05:07:27 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int	n;
	int		a;
	int		b;

	s1 = "guarda!";
	s2 = "guarda-roupas";
	n = 4;
	a = ft_strncmp(s1, s2, n);
	b = strncmp(s1, s2, n);
	printf("Resultado: %d\n", a);
	printf("Resultado pela função da biblioteca: %d\n", b);
}
*/