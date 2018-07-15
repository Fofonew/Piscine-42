/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 10:47:15 by doriol            #+#    #+#             */
/*   Updated: 2017/03/29 07:22:55 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		middle_line(int nb, int op, int nb2, int result)
{
	if (nb2 == 0 && op == '/')
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if (nb2 == 0 && op == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if (op == '*')
		result = nb * nb2;
	if (op == '/' && nb2 != 0)
		result = nb / nb2;
	if (op == '+')
		result = nb + nb2;
	if (op == '-')
		result = nb - nb2;
	if (op == '%' && nb2 != 0)
		result = nb % nb2;
	ft_putnbr(result);
	return (0);
}

int		casio(char *av1, char *av2, char *av3)
{
	int nb;
	int op;
	int nb2;
	int result;

	nb = ft_atoi(av1);
	op = av2[0];
	nb2 = ft_atoi(av3);
	result = 0;
	middle_line(nb, op, nb2, result);
	ft_putchar('\n');
	return (0);
}

int		main(int ar, char **av)
{
	if (ar == 4)
		casio(av[1], av[2], av[3]);
	return (0);
}
