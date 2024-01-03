/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:58:26 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/05 17:22:28 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *memptr1, const void *memptr2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned int	i;

	if (!memptr1 && !memptr2 && !n)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)memptr1;
	ptr2 = (unsigned char *)memptr2;
	while (n--)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
