/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 01:44:01 by doriol            #+#    #+#             */
/*   Updated: 2017/03/15 01:44:15 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	if (nb < 0 || nb > 13)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		i = 1;
		factorial = 1;
		while (i <= nb)
		{
			factorial = factorial * i;
			i++;
		}
		return (factorial);
	}
}
