/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 19:29:50 by notraore          #+#    #+#             */
/*   Updated: 2017/03/11 19:29:51 by notraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	less_zero(int x, int y)
{
	int xline;
	int yline;

	xline = 1;
	yline = 1;
	if (x <= 0 || y <= 0)
		return ;
	if (x > 1)
	{
		ft_putchar('o');
		while (xline != x - 1)
		{
			ft_putchar('-');
			xline++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	x_for_one(int x, int y)
{
	int xline;
	int yline;

	xline = 1;
	yline = 1;
	if (x == 1 && y > 1)
	{
		while (yline != y - 1)
		{
			ft_putchar('|');
			ft_putchar('\n');
			yline++;
		}
	}
	if (y == 1 && x > 1)
	{
		while (xline != x - 1)
		{
			ft_putchar('|');
			ft_putchar('\n');
			xline++;
		}
	}
}

void	middle_line(int x, int y)
{
	int xline;
	int yline;

	xline = 1;
	yline = 1;
	x_for_one(x, y);
	if (y > 1 && x > 1)
	{
		while (yline != y - 1)
		{
			xline = 1;
			ft_putchar('|');
			while (xline != x - 1)
			{
				ft_putchar(' ');
				xline++;
			}
			ft_putchar('|');
			ft_putchar('\n');
			yline++;
		}
	}
}

void	rush(int x, int y)
{
	int xline;
	int yline;

	xline = 1;
	yline = 1;
	less_zero(x, y);
	if (y > 1 && x >= 1)
	{
		middle_line(x, y);
		xline = 1;
		ft_putchar('o');
		if (x == 1)
			ft_putchar('\n');
		if (x > 1)
		{
			while (xline != x - 1)
			{
				ft_putchar('-');
				xline++;
			}
			ft_putchar('o');
			ft_putchar('\n');
		}
	}
}
