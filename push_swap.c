/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:33:31 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/09 18:26:55 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **ar)
{
	int v;
	long long int *a;
	long long int *b;
	int i;
	int flag;
	int max_a;
	int max_b;
	int count;
	int n_a;
	int n_b;
	int k;
	int u;

	flag = 0;
	a = NULL;
	b = NULL;
	is_v(ar[ac - 1], &ac, &v);
    if (!(is_corect(ac, ar)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	a = (long long int *)malloc(sizeof(long long int) * (ac));
	b = (long long int *)malloc(sizeof(long long int) * (ac));
	make_arr(ac, ar, a, b);
	count = 0;
	i = 0;
	while (a[i] != 3000000000)
		i++;
	if (i > 3)
	{
		i = i / 2;
		while (i > 0)
		{
			pa_b(a, b);
			count++;
			i--;
		}
	}
//	while (!(is_sort(a)))
//	{
		max_a = is_max(a);
		max_b = is_max(b);
		n_a = where_is_min(max_a, a);
		n_b = where_is_min(max_b, b);
		if (n_a == 1 && n_b == 1)
		{
			while (max_a >= 0 || max_b >= 0)
			{
				if (max_a >= 0 && max_b >= 0)
				{
					rr(a ,b);
					max_a--;
					max_b--;
					printf("rr\n");
					count++;
				}
				else if (max_a >= 0)
				{
					ra_b(a);
					printf("ra\n");
					count++;
					max_a--;
				}
				else if (max_b >= 0)
				{
					ra_b(b);
					printf("rb\n");
					count++;
					max_b--;
				}
			}
		}
		else if (n_a == 0 && n_b == 0)
		{
			while (a[max_a] != 3000000000 || b[max_b] != 3000000000)
			{
				if (a[max_a] != 3000000000 && b[max_b] != 3000000000)
				{
					rrr(a, b);
					printf("rrr\n");
					count++;
					max_a++;
					max_b++;
				}
				else if (b[max_b] != 3000000000)
				{
					rra_b(b);
					printf("rrb\n");
					count++;
					max_b++;
				}
				else if (a[max_a] != 3000000000)
				{
					rra_b(a);
					printf("rra\n");
					count++;
					max_a++;
				}
			}
			rrr(a, b);
			count++;
			printf("rrr\n");
		}
		else if (n_a == 1)
		{
			while (max_a >= 0)
			{
				ra_b(a);
				printf("ra\n");
				count++;
				max_a--;
			}
		}
		else if (n_a == 0)
		{
			while (a[max_a] != 3000000000)
			{
				rra_b(a);
				printf("rra\n");
				count++;
				max_a++;
			}
			rra_b(a);
			count++;
		}
		else if (n_b == 1)
		{
			while (max_b >= 0)
			{
				ra_b(b);
				printf("rb\n");
				count++;
				max_b--;
			}
		}
		else if (n_b == 0)
		{
			while (b[max_b] != 3000000000)
			{
				rra_b(b);
				printf("rrb\n");
				count++;
				max_b++;
			}
			rra_b(b);
			count++;
		}
		i = 20;
		while (!(is_sort(a)))
		{
			max_a = is_max(a);
			printf("max_a =%d\n", max_a);
			if (a[0] < a[1])
			{
				ra_b(a);
				count++;
				printf("ra\n");
			}
			if (max_a == 1)
			{
				ra_b(a);
				count++;
				printf("ra\n");
			}
			if (a[0] > a[1])
			{
				sa_b(a);
				count++;
				printf("sa\n");
			}
		}
		while (!(is_sort(b)))
		{
			max_b = is_max(b);
			printf("max_b =%d\n", max_b);
			if (b[0] < b[1])
			{
				ra_b(b);
				count++;
				printf("rb\n");
			}
			if (max_b == 1)
			{
				ra_b(b);
				count++;
				printf("rb\n");
			}
			if (b[0] > b[1])
			{
				sa_b(b);
				count++;
				printf("sb\n");
			}
		}
		i = 0;
		count++;
		if (v == 1)
		{
			while (a[i] != 3000000000)
			{
				printf("a[i] = %lld\n", a[i]);
				i++;
			}
			i = 0;
			while (b[i] != 3000000000)
			{
				printf("b[i] = %lld\n", b[i]);
				i++;
			}
			printf("-----count =%d------\n", count);
		}
//	}
	printf("the total number of transactions operations = %d\n", count);
	printf("v = %d\n", v);
	i = 0;
	while (a[i] != 3000000000)
	{
		printf("a[i] = %lld\n", a[i]);
		i++;
	}
//	printf("NUMBER IN A =%d\n", i);
	i = 0;
	printf("________________\n");
	while (b[i] != 3000000000)
	{
		printf("b[i] = %lld\n", b[i]);
		i++;
	}
//	printf("NUMBER IN B =%d\n", i);
	return (0);
}
