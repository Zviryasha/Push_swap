/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 11:12:05 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/19 15:48:55 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sorting_1(long long int *a, long long int *b)
{
	int min;
	int n;
	int count;

	count = 0;
	while (!is_sort(a))
	{
		min = is_min(a);
		n = where_is_min(min, a);
		if (min == 1)
			sa_b(a);
		else if (min == 0)
			pa_b(a, b);
		else if (min > 1 && n == 1)
			ra_b(a);
		else if (min > 1 && n == 0)
			rra_b(a);
		count++;
	}
	return (count);
}

int		sorting_2(long long int *a, long long int *b, int ac)
{
	int min;
	int n;
	int count;

	count = 0;
	while (!is_reverse_sort(b) && total_in_arr(a) <= ac)
	{
		min = is_max(b);
		n = where_is_min(min, b);
		if (min == 1)
			sa_b(b);
		else if (min == 0)
			pa_b(b, a);
		else if (min > 1 && n == 1)
			ra_b(b);
		else if (min > 1 && n == 0)
			rra_b(b);
		count++;
	}
	return (count);
}

int		sorting_3(long long int *a, long long int *b)
{
	int min;
	int n;
	int count;

	count = 0;
	while (!is_reverse_sort(b))
	{
		min = is_max(b);
		n = where_is_min(min, b);
		if (min == 1)
			sa_b(b);
		else if (min == 0)
			pa_b(b, a);
		else if (min > 1 && n == 1)
			ra_b(b);
		else if (min > 1 && n == 0)
			rra_b(b);
		count++;
	}
	return (count);
}
