/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:40:10 by doriol            #+#    #+#             */
/*   Updated: 2017/03/25 05:58:57 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*string2;

	i = 0;
	while (src[i] != '\0')
		i++;
	size = i;
	string2 = (char*)malloc(size + 1);
	i = 0;
	while (i != size)
	{
		string2[i] = src[i];
		i++;
	}
	string2[i] = '\0';
	return (string2);
}
