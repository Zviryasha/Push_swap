/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:36 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/19 16:25:32 by opanchen         ###   ########.fr       */
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
  /*  i = 0;
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
    */count = count + sort_2(a , b, ac / 2);
    count = count + sort_2(a , b, ac / 4);
    //	count = count + sort_2(a , b, ac / 6);
/*    i = 0;
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
    printf("Count =%d\n", count);
  */  u = 0;
    while (!is_sort(a))
    {
        min = is_min(a);
        n = where_is_min(min, a);
        if (min == 1)
        {
            sa_b(a);
        }
        else if (min == 0)
        {
            pa_b(a, b);
        }
        else if (min > 1 && n == 1)
        {
            ra_b(a);
        }
        else if (min > 1 && n == 0)
        {
            rra_b(a);
        }
        count++;
    }
    printf("count =%d\n", count);
    while (!is_reverse_sort(b) && total_in_arr(a) <= ac)
    {
        min = is_max(b);
        n = where_is_min(min, b);
        if (min == 1)
        {
            //			printf("sa\n");
            sa_b(b);
        }
        else if (min == 0)
        {
            //			printf("pb\n");
            pa_b(b, a);
        }
        else if (min > 1 && n == 1)
        {
            //			printf("ra\n");
            ra_b(b);
        }
        else if (min > 1 && n == 0)
        {
            //			printf("rra\n");
            rra_b(b);
        }
        count++;
    }
  
//    count = count + sort_3(b , a, ac);
//    count = count + sort_3(b , a, ac / 2);
    //	count = count + sort_2(b , a, ac / 3);

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
 /*   while (total_in_arr(a) > ac)
    {
        pa_b(a, b);
        count++;
    }
*/    
  /*  while (!is_reverse_sort(b))
    {
        min = is_max(b);
        n = where_is_min(min, b);
        if (min == 1)
        {
            sa_b(b);
        }
        else if (min == 0)
        {
            pa_b(b, a);
        }
        else if (min > 1 && n == 1)
        {
            ra_b(b);
        }
        else if (min > 1 && n == 0)
        {
            rra_b(b);
        }
        count++;
    }
    
    while (!is_sort(a))
    {
        min = is_min(a);
        n = where_is_min(min, a);
        if (min == 1)
        {
            sa_b(a);
        }
        else if (min == 0)
        {
            pa_b(a, b);
        }
        else if (min > 1 && n == 1)
        {
            ra_b(a);
        }
        else if (min > 1 && n == 0)
        {
            rra_b(a);
        }
        count++;
    }

   */ 
    /*	i = 0;
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
     *//*	while (b[0] != 3000000000)
     {
         pa_b(b, a);
         count++;
     }
*/    return (count);
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

