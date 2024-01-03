/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:36:58 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/04 14:51:02 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *fi, size_t n)
{
	size_t len;

	if (*fi == '\0')
		return ((char *)str);
	len = ft_strlen(fi);
	while (*str != '\0' && n >= len)
	{
		if (ft_strncmp(str, fi, len) == 0)
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
