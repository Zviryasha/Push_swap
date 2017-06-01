/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 10:48:44 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/13 17:03:07 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_min(long long int *a)
{
	long long int min;
	int i;
	int index;

	if (a[0] == 3000000000)
		return (-1);
	else
	{
		index = 0;
		i = 1;
		min = a[0];
		while (a[i] != 3000000000)
		{
			if (min > a[i])
			{
				min = a[i];
				index = i;
			}
			i++;
		}
	}
	return (index);
}

int		where_is_min(int min, long long int *a)
{
	int i;

	i = 0;
	while (a[i] != 3000000000)
		i++;
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;
	if (min <= i)
		return (1);
	else
		return (0);
}

int		next_min(int min_x, long long int *a)
{
	int i;
	int min;
	int index;

	i = 0;
	if (a[0] == 3000000000)
		return (-1);
	else
	{
		index = 0;
		i = 1;
		min = a[0];
		if (min == min_x && a[1] != 3000000000)
			min = a[1];
		else
			return (-1);
		while (a[i] != 3000000000)
		{
			if (min == min_x)
				i++;
			if (min > a[i])
			{
				min = a[i];
				index = i;
			}
			i++;
		}
	}
	i = 0;
	while (a[i] != 3000000000)
		i++;
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;
	if (index <= i)
		return (1);
	else
		return (0);
	return (index);
}

int     is_max(long long int *a)
{
	long long int min;
	int i;
	int index;
	
	if (a[0] == 3000000000)
		return (-1);
	else
	{
		index = 0;
		i = 1;
		min = a[0];
		while (a[i] != 3000000000)
		{
			if (min < a[i])
			{
				min = a[i];
				index = i;
			}
			i++;
		}
	}
	return (index);
}
