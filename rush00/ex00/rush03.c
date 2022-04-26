/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:41:35 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/10 18:06:52 by thade-ol         ###   ########.fr       */
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
			if ((b == 1 || b == y) && a == 1)
				ft_putchar('A');
			else if ((b == 1 || b == y) && a == x)
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
