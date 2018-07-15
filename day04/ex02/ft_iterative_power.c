/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:51:20 by doriol            #+#    #+#             */
/*   Updated: 2017/03/19 22:40:47 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		i = 1;
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (0);
}
