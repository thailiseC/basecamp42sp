/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:33:07 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/21 01:36:59 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	string[] = "Vamos TESTAR O programa.";
	char	*res;
	int		a;

	printf("Essa é a frase no início: %s\n", string);
	a = 0;
	while (string[a] != '\0')
	{
		a++;
	}
	res = malloc(a*sizeof(char));
	res = ft_strlowcase(string);
	printf("Esse é o resultado: %s\n", res);
}
*/