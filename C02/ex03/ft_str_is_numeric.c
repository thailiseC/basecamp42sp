/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:30:46 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/20 22:35:56 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	i = 0;
	if (str[0] == '\0')
		check = 1;
	else
	{	
		while (str[i] != '\0')
		{
			if (str[i] >= 48 && str[i] <= 57)
			{
				check = 1;
				i++;
			}
			else
			{	
				check = 0;
				return (check);
			}
		}
	}
	return (check);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*string;
	int		check;

	string = "42";
	check = ft_str_is_numeric(string);
	printf("String 1 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "42saopaulo";
	check = ft_str_is_numeric(string);
	printf("String 2 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "";
	check = ft_str_is_numeric(string);
	printf("String 3 = %s\n", string);
	printf("Validação = %d\n", check);
}
*/