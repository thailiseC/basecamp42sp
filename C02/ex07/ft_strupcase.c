/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:21:46 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/21 01:37:15 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	string[] = "Vamos testar o programa.";
	char	*res;
	int		a;

	printf("Essa é a frase no início: %s\n", string);
	a = 0;
	while (string[a] != '\0')
	{
		a++;
	}
	res = malloc(a*sizeof(char));
	res = ft_strupcase(string);
	printf("Esse é o resultado: %s\n", res);
}
*/