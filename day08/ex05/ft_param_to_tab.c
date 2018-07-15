/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 23:58:56 by doriol            #+#    #+#             */
/*   Updated: 2017/03/28 03:23:59 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strdup(char *src)
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

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par *tab;

	i = 0;
	tab = malloc(sizeof(struct s_stock_par) * (ac + 1));
	while (i <= ac - 1)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
