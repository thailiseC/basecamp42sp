/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:17:12 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/23 01:19:53 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Alo";

	printf("String: %s \n", str);
	printf("Tamanho da string: %d \n", ft_strlen(str));
	printf("Tamanho da string pela função da biblioteca: %ld \n", strlen(str));
}
*/