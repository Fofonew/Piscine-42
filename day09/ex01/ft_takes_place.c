/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:45:47 by doriol            #+#    #+#             */
/*   Updated: 2017/03/16 19:24:16 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int hour2;

	hour2 = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour <= 10 && hour > 0)
		printf("%d.00 A.M AND %d.00 A.M.\n", hour, hour2);
	else if (hour == 11)
		printf("%d.00 A.M AND %d.00 P.M.\n", hour, hour2);
	else if (hour == 23)
		printf("%d.00 P.M AND %d.00 A.M.\n", hour - 12, hour2 - 12);
	else if (hour == 0)
		printf("%d.00 A.M AND %d.00 A.M.\n", hour + 12, hour2);
	else if (hour == 12)
		printf("%d.00 P.M AND %d.00 P.M.\n", hour, hour2 - 12);
	else if (hour > 12 && hour <= 22)
		printf("%d.00 P.M AND %d.00 P.M.\n", hour - 12, hour2 - 12);
}
