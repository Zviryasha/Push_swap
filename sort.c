/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:36 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/01 15:03:50 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sort_1(long long int *a, long long int *b, int ac)
{
	int min;
	int n;
	int count;
	int i;
	int u;
	long long int poku;

	count = 0;
	i = 2;
	count = sort_2(a, b, ac);
	count = count + sort_2(a , b, ac / 2);
	count = count + sort_2(a , b, ac / 4);
//	printf("ACCCCCCCCCCC =%d\n", (ac + 1) / 6);
//	count = count + sort_2(a , b, ac / 6);
	 u = 0;

	count = count + sorting_1(a, b);
	count = count + sorting_2(a, b, ac);

	count = count + sort_2(b , a, ac);
	count = count + sort_2(b , a, (ac + 1) / 2);
//	count = count + sort_2(b , a, ac / 6);
    while (total_in_arr(a) > ac)
    {
        pa_b(a, b);
        count++;
    }
count = count + sorting_3(a, b);
	while (b[0] != 3000000000)
	{
		pa_b(b, a);
		count++;
	}
	return (count);
}

int sort_2(long long int *a, long long int *b, int ac)
{
	int poku;
	int i;
	int count;
	int u;
	int k;
	int max_b;
	int max_a;
	
	count = 0;
    poku = ave(a, ac);
    i = 0;
    k = ac;
    u = a[poku];
	printf("a{poku} =%d\n", u);
	i = 0;
	printf("AC =%d\n", ac);
    while (ac >= 0 && !(total_in_arr(b) == ((k - 2) / 2) || total_in_arr(b) == (k / 2)))
    {
//		printf("TOTAL IN ARR =%d\n", total_in_arr(b));
        if (u > a[0])
		{
			pa_b(a ,b);
			count++;
		}
        else
		{
			ra_b(a);
			count++;
		}
		ac--;
    }
/*	while (a[0] != 3000000000)
    {
        pa_b(a, b);
        count++;
    }
*/	return (count);
}

int sort_3(long long int *a, long long int *b, int ac)
{
    int poku;
    int i;
    int count;
    int u;
    int k;
    int max_b;
    int max_a;
    
    count = 0;
    poku = ave(a, ac);
    i = 0;
    k = ac;
    u = a[poku];
    printf("a{poku} =%d\n", u);
    i = 0;
    printf("AC =%d\n", ac);
    while (ac >= 0 && !(total_in_arr(b) == ((k - 2) / 2) || total_in_arr(b) == (k / 2)))
    {
        //		printf("TOTAL IN ARR =%d\n", total_in_arr(b));
        if (u < a[0])
        {
            pa_b(a ,b);
            count++;
        }
        else
        {
            ra_b(a);
            count++;
        }
        ac--;
    }
    /*	while (a[0] != 3000000000)
     {
     pa_b(a, b);
     count++;
     }
     */	return (count);
}

