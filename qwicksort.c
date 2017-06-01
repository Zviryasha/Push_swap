/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qwicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 12:35:25 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/19 14:23:19 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ave(long long int *a, int ac)
{
	int i;
	int min;
	long long int *c;
	int len;
	int ado;

	i = 0;
	ado = ac;
	c = (long long int *)malloc(sizeof(long long int) * ac);
	while ((ado - 1) > 0)
	{
		c[i] = a[i];
//		printf("c[i] =%lld\n", c[i]);
		ado--;
		i++;
	}
//	printf("-------c-----------\n");
	c[i] = 3000000000;
	ac = (ac - 1) / 2;
	while (ac > 0)
	{
		min = is_min(c);
		c[min] = 3000000001;
		ac--;
	}
	min = is_min(c);
	free(c);
	c = NULL;
	return (min);
}

int		total_in_arr(long long int *a)
{
	int i;

	i = 0;
	while (a[i] != 3000000000)
		i++;
	return (i);
}






