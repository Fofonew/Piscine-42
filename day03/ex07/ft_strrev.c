/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:30:08 by doriol            #+#    #+#             */
/*   Updated: 2017/03/15 02:26:39 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int lenght;
	int temp;
	int d;
	int f;

	lenght = ft_strlen(str) - 1;
	f = lenght;
	d = 0;
	while (f > (lenght / 2))
	{
		temp = str[f];
		str[f] = str[d];
		str[d] = temp;
		f--;
		d++;
	}
	return (str);
}
