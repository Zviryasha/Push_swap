/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:45:12 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/14 15:45:55 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	size_t	i;

	i = -1;
	while (++i < num)
		if (((unsigned char*)memptr)[i] == (unsigned char)val)
			return (void *)((size_t)(memptr + i));
	return (0);
}
