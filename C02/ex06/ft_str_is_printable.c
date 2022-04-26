/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:44:39 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/20 23:20:22 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
			if (str[i] >= 32 && str[i] != 127)
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
	check = ft_str_is_printable(string);
	printf("String 1 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "S@b&-se que e$$es ¢aracteres são imprim!veis.";
	check = ft_str_is_printable(string);
	printf("String 2 = %s\n", string);
	printf("Validação = %d\n", check);
	string = "\n";
	check = ft_str_is_printable(string);
	printf("String 3 = %s\n", string);
	printf("Validação = %d\n", check);
}
*/