/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 09:18:20 by doriol            #+#    #+#             */
/*   Updated: 2017/03/25 05:55:29 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_word(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' '
				|| str[i] == '\t' || str[i] == '\n'))
		{
			i++;
		}
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n')
		{
			i++;
			words++;
		}
	}
	return (words);
}

int		len_words(char *str, int i)
{
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
	{
		i++;
	}
	return (i);
}

int		fuck_space(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			&& str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		y;
	int		k;
	char	**tab;

	i = 0;
	y = 0;
	tab = malloc(sizeof(char *) * count_word(str) + 1);
	if (count_word(str) != 0)
	{
		while (str[i])
		{
			i = fuck_space(str, i);
			tab[y] = (char *)malloc(sizeof(char) * len_words(str, i) + 1);
			k = 0;
			while (str[i] != ' ' && str[i] != '\t'
					&& str[i] != '\n' && str[i] != '\0')
				tab[y][k++] = str[i++];
			i = fuck_space(str, i);
			tab[y][k] = '\0';
			y++;
		}
	}
	tab[y] = 0;
	return (tab);
}
