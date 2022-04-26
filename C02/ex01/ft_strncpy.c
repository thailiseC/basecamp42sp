/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:04:57 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/20 21:44:35 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include<stdio.h>
#include <string.h>
int    main()
{
    char	amarelo[100]="Marvins2"; 
    char	laranja[100];
    char	azul[100];
    int	size;
    size = 5;
    ft_strncpy(laranja, amarelo, size);
    strncpy(azul, amarelo, size);
    printf("Digitado:%s\n", amarelo);
    printf("Esperado:%s\n", azul);
    printf("Atingido:%s\n", laranja);
    printf("\n");
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*string;
	char	*dest;
	int		a;
	unsigned int	n;

	string = "Sera que eu posso colocar uma string comprida assim?";
	n = 11;
	dest = malloc(n*sizeof(char));
	dest = ft_strncpy(dest, string, n);
	a = 0;
	while (string[a] != '\0')
	{
		a++;
	}
	printf("src = %s\n", string);
	printf("tamanho de src = %d\n", a);
	printf("dest = %s\n", dest);
	printf("tamanho de dest = %d\n", n);
}
*/