/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:28:09 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/04 16:38:00 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	cur;

	cur = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == c)
			return (c1 + cur + 1);
		cur++;
	}
	return (NULL);
}
