/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 01:52:22 by doriol            #+#    #+#             */
/*   Updated: 2017/03/18 02:17:27 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	while (i <= nb)
	{
		i++;
		temp = i * i;
		if (nb == temp)
		{
			return (i);
		}
	}
	return (0);
}