/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_comand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 19:52:23 by opanchen          #+#    #+#             */
/*   Updated: 2017/05/11 20:51:04 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_comand(char *s)
{
	if ((s[0] == 's' || s[0] == 'p' || s[0] == 'r')
			&& s[1] == 'a' && s[2] == '\0')
		return (0);
	else if ((s[0] == 's' || s[0] == 'p' || s[0] == 'r')
			&& s[1] == 'b' && s[2] == '\0')
		return (0);
	else if (s[0] == 's' && s[1] == 's' && s[2] == '\0')
		return (0);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == '\0')
		return (0);
	else if (s[0] == 'r' && s[1] == 'r' &&
			(s[2] == 'a' || s[2] == 'b' || s[2] == 'r') && s[3] == '\0')
		return (0);
	else
		return (1);
}

void	comand(char *s, long long int *a, long long int *b)
{
	if (ft_strcmp(s, "sa") == 0)
		sa(a);
	if (ft_strcmp(s, "sb") == 0)
		sb(b);
	if (ft_strcmp(s, "ss") == 0)
		ss(a, b);
	if (ft_strcmp(s, "pa") == 0)
		pa(a);
	if (ft_strcmp(s, "pb") == 0)
		pb(b);
	if (ft_strcmp(s, "ra") == 0)
		ra(a);
	if (ft_strcmp(s, "rb") == 0)
		rb(b);
	if (ft_strcmp(s, "rr") == 0)
		rr(a, b);
	if (ft_strcmp(s, "rra") == 0)
		rra(a);
	if (ft_strcmp(s, "rrb") == 0)
		rrb(b);
	if (ft_strcmp(s, "rrr") == 0)
		rrr(a ,b);
}
