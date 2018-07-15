/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 17:54:08 by doriol            #+#    #+#             */
/*   Updated: 2017/03/23 06:46:35 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;
	unsigned int f;

	i = 0;
	j = 0;
	f = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = i;
		while (str[j] == to_find[f])
		{
			j++;
			f++;
			if (to_find[f] == '\0')
				return (&str[i]);
		}
		f = 0;
		i++;
	}
	return (NULL);
}
