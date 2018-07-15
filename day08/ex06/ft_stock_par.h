/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 08:20:35 by doriol            #+#    #+#             */
/*   Updated: 2017/03/28 03:23:55 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

void				ft_putchar(char c);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);

typedef	struct		s_stock_par	{
	int				size_param;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

#endif
