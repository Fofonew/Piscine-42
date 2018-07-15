/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:52:32 by doriol            #+#    #+#             */
/*   Updated: 2017/03/19 22:41:10 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0)
	{
		result = 1;
		return (result);
	}
	else if (power > 0)
	{
		result = nb * ft_recursive_power(nb, (power - 1));
		return (result);
	}
	return (0);
}
