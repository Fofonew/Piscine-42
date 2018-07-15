/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 00:32:29 by doriol            #+#    #+#             */
/*   Updated: 2017/03/20 04:09:21 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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