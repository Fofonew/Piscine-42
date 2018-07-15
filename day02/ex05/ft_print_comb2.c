/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 23:19:35 by doriol            #+#    #+#             */
/*   Updated: 2017/03/12 02:56:28 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int j, int i)
{
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
	ft_putchar(' ');
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	if ((j != 98) || (i != 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j <= 98)
	{
		i = 0;
		while (i <= 99)
		{
			if (j < i)
			{
				ft_display(j, i);
			}
			i++;
		}
		i = j++;
	}
}
