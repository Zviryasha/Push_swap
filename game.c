/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 14:03:00 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/07 13:20:13 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_b(long long int *a)
{
	int tmp;

	if (a[0] == 3000000000 || a[1] == 3000000000)
		return ;
	else
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
}

void	ss(long long int *a, long long int *b)
{
	sa_b(a);
	sa_b(b);
}

void	pa_b(long long int *a, long long int *b)
{
	int tmp_a;
	int i;

	i = 1;
	if (a[0] == 3000000000)
		return ;
	else
	{
		tmp_a = a[0];
		while (a[i] != 3000000000)
		{
			a[i - 1] = a[i];
			i++;
		}
		a[i - 1] = a[i];
	}
	i = 0;
	while (b[i] != 3000000000)
		i++;
	while (i >= 0)
	{
		b[i + 1] = b[i];
		i--;
	}
	b[0] = tmp_a;
}

void	ra_b(long long int *a)
{
	int i;
	int tmp;
	
	if (a[0] == 3000000000)
		return ;
	i = 1;
	tmp = a[0];
	while (a[i] != 3000000000)
	{
		a[i - 1] = a[i];
		i++;
	}
	a[i - 1] = tmp;
}

void	rr(long long int *a, long long int *b)
{
	ra_b(a);
	ra_b(b);
}

void	rra_b(long long int *a)
{
	int i;
	int tmp;

	i = 0;
	while (a[i] != 3000000000)
		i++;
	i = i - 1;
	tmp = a[i];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = tmp;
}

void	rrr(long long int *a, long long int *b)
{
	rra_b(a);
	rra_b(b);
}
