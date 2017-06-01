/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 16:24:34 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/13 11:55:57 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "get_next_line.h"

int		main(int ac, char **ar)
{
	char 			*tro;
	long long int	*a;
	long long int	*b;
	int i;


	tro = "ll";
	if (!(is_corect(ac, ar)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	a = (long long int *)malloc(sizeof(long long int) * (ac));
	b = (long long int *)malloc(sizeof(long long int) * (ac));
	make_arr(ac, ar, a, b);
	while (tro[0] != '\0')
	{
		get_next_line(0, &tro);
		if (is_comand(tro) && tro[0] != '\0')
		{
			ft_putstr("Error\n");
			return (0);
		}
		comand(tro, a, b);
	}
	if (is_sort(a) && b[0] == 3000000000)
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("KO\n");
	}
	return (0);
}
