/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 16:24:34 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/11 20:25:14 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "get_next_line.h"

int		main(int ac, char **format)
{
	va_list		arg;
	char 		*tro;
	int			*a;
	int			*b;


	tro = "ll";
	while (tro[0] != '\0')
	{
		get_next_line(0, &tro);
		if (is_comand(tro))
		{
			ft_putstr("Error\n");
			return (0);
		}
		comand(tro, a, b);
	}
	if (is_sort(a) && b[0] == 3000000000)
	{
		ft_putstr("OK\n");
		return (0);
	}
	else
	{
		ft_putstr("KO\n");
		return (0);
	}
}
