/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_corect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:57:21 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/19 12:07:11 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_corect(int ac, char **ar)
{
	int i;
	int k;
	int dig;

	i = 1;
	k = 1;
	while (i < ac)
	{
		dig = ft_atoi(ar[i]);
		if (dig == 0)
		{
			if (!(ar[i][0] == '0' && ar[i][1] == '\0'))
				return (0);
		}
		if (ft_strlen(ar[i]) == ft_strlen(ft_itoa(dig)))
			k++;
		if ((dig >= -2147483648) && dig <= 2147483647)
			k++;
		i++;
	}
	if (((i * 2) - 1) != k)
		return (0);
	if (!(check_dublicate(ac, ar)))
		return (0);
	return (1);
}

int		check_dublicate(int ac, char **ar)
{
	int j;
	int h;
	int dig;

	j = 1;
	while (j < ac)
	{
		dig = ft_atoi(ar[j]);
		h = 1;
		while (h < ac)
		{
			if (dig == ft_atoi(ar[h]) && h != j)
				return (0);
			h++;
		}
		j++;
	}
	return (1);
}
