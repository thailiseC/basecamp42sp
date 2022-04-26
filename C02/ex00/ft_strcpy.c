/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:25:29 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/20 23:52:29 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*string;
	char	*dest;
	int		a;

	string = "Sera que eu posso colocar uma string comprida assim?";
	a = 0;
	while (string[a] != '\0')
	{
		a++;
	}
	dest = malloc(a*sizeof(char));
	dest = ft_strcpy(dest, string);
	printf("%s\n", dest);
	printf("%d\n", a);
	free(dest);
}
*/