/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:39:23 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/10 04:39:24 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y && (x > 0 && y > 0))
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 || a == x) && b == 1)
				ft_putchar('A');
			else if ((a == 1 || a == x) && b == y)
				ft_putchar('C');
			else if (b == 1 || b == y || a == 1 || a == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		write(1, "\n", 1);
	}
}
