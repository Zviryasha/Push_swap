/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:09:10 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/05 20:38:03 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = -1;
	while (dst[i] && i < size)
		i++;
	k = ft_strlen(src);
	while ((src[++j]) && ((i + j + 1) < size))
		dst[i + j] = src[j];
	if (i != size)
		dst[i + j] = '\0';
	return (i + k);
}
