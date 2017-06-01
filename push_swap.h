/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:40:27 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/19 11:39:44 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"

int     is_corect(int ac, char **ar);
void    is_v(char *s, int *a, int *v);
int     check_dublicate(int ac, char **ar);
void    make_arr(int ac, char **ar, long long int *a, long long int *b);
int     is_sort(long long int *a);
void	sa_b(long long int *a);
void    ss(long long int *a, long long int *b);
void    pa_b(long long int *a, long long int *b);
void    ra_b(long long int *a);
void    rr(long long int *a, long long int *b);
void    rra_b(long long int *a);
void    rrr(long long int *a, long long int *b);
int     is_min(long long int *a);
int     is_max(long long int *a);
int     where_is_min(int min, long long int *a);
int     where_is_pisdec(long long int *a);
int     is_reverse_sort(long long int *a);
int     next_min(int min_x, long long int *a);
void	comand(char *s, long long int *a, long long int *b);
int		is_comand(char *s);
long long int	ave(long long int *a, int ac);
int sort_1(long long int *a, long long int *b, int ac);
int sort_2(long long int *a, long long int *b, int ac);
int     total_in_arr(long long int *a);
int     sort_3(long long int *a, long long int *b, int ac);
int     sorting_1(long long int *a, long long int *b);
int     sorting_2(long long int *a, long long int *b, int ac);
int     sorting_3(long long int *a, long long int *b);


#endif
