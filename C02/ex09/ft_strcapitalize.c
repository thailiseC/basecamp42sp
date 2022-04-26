/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:41:14 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/21 01:31:09 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') 
				|| str[i - 1] > 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] > '0' && str[i - 1] < '9'))
							str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	string[] = "kirbhg kaw234895y2#@rgikj-IFWLE+DS TFW-WE";
	char	*res;
	int		a;

	printf("Essa é a frase no início: %s\n", string);
	a = 0;
	while (string[a] != '\0')
	{
		a++;
	}
	res = malloc(a*sizeof(char));
	res = ft_strcapitalize(string);
	printf("Esse é o resultado: %s\n", res);
}
*/