/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:07:46 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/22 05:09:36 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			j = 0;
			while (to_find[j] == str[i + j])
			{	
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Olá senhor";
	to_find = " ";
	printf("%s \n", ft_strstr(str, to_find));
	printf("%s \n", strstr(str, to_find));
	to_find = "Olá";
	printf("%s \n", ft_strstr(str, to_find));
	printf("%s \n", strstr(str, to_find));
	to_find = "hor";
	printf("%s \n", ft_strstr(str, to_find));
	printf("%s \n", strstr(str, to_find));
	to_find = "Aaaaaagh";
	printf("%s \n", ft_strstr(str, to_find));
	printf("%s \n", strstr(str, to_find));
	str = "Salve Mlkada.";
    to_find = "Mllk";
    printf("%s \n", ft_strstr(str, to_find));
    printf("%s \n", strstr(str, to_find));
    to_find = "";
    printf("%s \n", ft_strstr(str, to_find));
    printf("%s \n", strstr(str, to_find));
    to_find = "lve";
    printf("%s \n", ft_strstr(str, to_find));
    printf("%s \n", strstr(str, to_find));
    to_find = " M";
    printf("%s \n", ft_strstr(str, to_find));
    printf("%s \n", strstr(str, to_find));
    to_find = ".";
    printf("%s \n", ft_strstr(str, to_find));
    printf("%s \n", strstr(str, to_find));
}
*/