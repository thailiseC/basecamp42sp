/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:40:29 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/20 22:43:32 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
			if (str[i] >= 'A' && str[i] <= 'Z')
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

	string = "";
	check = ft_str_is_uppercase(string);
	printf("String 1 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "QuarentaeDois42";
	check = ft_str_is_uppercase(string);
	printf("String 2 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "QUARENTAEDOIS";
	check = ft_str_is_uppercase(string);
	printf("String 3 = %s\n", string);
	printf("Validação = %d\n", check);
}
*/