/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:36:59 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/21 01:36:29 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
			if (str[i] >= 'a' && str[i] <= 'z')
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

	string = "quarentaedois";
	check = ft_str_is_lowercase(string);
	printf("String 1 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "QuarentaeDois42";
	check = ft_str_is_lowercase(string);
	printf("String 2 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "";
	check = ft_str_is_lowercase(string);
	printf("String 3 = %s\n", string);
	printf("Validação = %d\n", check);
}
*/