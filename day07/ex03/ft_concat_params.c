/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:57:50 by doriol            #+#    #+#             */
/*   Updated: 2017/03/25 06:03:08 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[y])
		y++;
	while (src[i])
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

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

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		i;
	char	*string;

	size = 0;
	i = 0;
	while (++i < argc)
		size += (ft_strlen(argv[i]) + 1);
	string = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	while (++i < argc)
	{
		ft_strcat(string, argv[i]);
		ft_strcat(string, "\n");
	}
	string[size - 1] = '\0';
	string[size] = '\0';
	return (string);
}
