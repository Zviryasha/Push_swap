/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 12:55:07 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/09 15:42:45 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sort(long long int *a)
{
	int i;

	if (a[0] == 3000000000)
		return (1);
	i = 0;
	while (a[i + 1] != 3000000000)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int		where_is_pisdec(long long int *a)
{
	int i;

	i = 0;
	while (a[i + 1] != 3000000000)
	{
		if (a[i] > a[i + 1])
			return (i);
		i++;
	}
	return (0);
}

int     is_reverse_sort(long long int *a)
{
	int i;
	
	i = 0;
	while (a[i + 1] != 3000000000)
	{
		if (a[i] < a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
