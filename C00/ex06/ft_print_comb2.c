/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:21:11 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/12 23:23:49 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	dozen_1;
	int	dozen_2;

	dozen_1 = 0;
	while (dozen_1 < 100)
	{
		dozen_2 = dozen_1 + 1;
		while (dozen_2 < 100)
		{
			ft_putchar(dozen_1 / 10 + '0');
			ft_putchar(dozen_1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(dozen_2 / 10 + '0');
			ft_putchar(dozen_2 % 10 + '0');
			if (dozen_1 != 98 || dozen_2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			dozen_2++;
		}
	dozen_1++;
	}
}
