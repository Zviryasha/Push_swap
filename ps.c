/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 12:03:17 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/01 13:51:39 by opanchen         ###   ########.fr       */
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
	int poku;
    
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
	count = sort_2(a, b, ac);
	i = 0;
	while (a[i] != 3000000000)
	{
		printf("a[i] = %lld\n", a[i]);
		i++;
	}
	i = 0;
	printf("________________\n");
	while (b[i] != 3000000000)
	{
		printf("b[i] = %lld\n", b[i]);
		i++;
	}
	count = count + sort_1(a, b, ac / 2);
	printf("-------ac =%d------\n", ac);
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
	printf("the total number of transactions operations = %d\n", count);
	if (is_sort(a) && b[0] == 3000000000)
		printf("OK-----n =%d\n", total_in_arr(a));
	else
		printf("NEA\n");
	free(a);
	free(b);
	return (0);
}
