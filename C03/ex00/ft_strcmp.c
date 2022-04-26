/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:46:12 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/22 05:10:12 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
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
	int		res;

	s1 = "hOje estou feliz";
	s2 = "hoje estou feliz";
	res = ft_strcmp(s1, s2);
	printf("Resultado: %d\n", res);
	printf("Resultado pela função strcmp: %d\n", strcmp(s1, s2));
}
*/