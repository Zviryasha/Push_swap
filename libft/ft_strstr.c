/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 13:21:42 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/05 20:30:29 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *fi)
{
	int		i;
	int		j;
	char	c;

	c = fi[0];
	if (!c)
		return ((char *)str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (fi[j] == str[i + j])
		{
			if (fi[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
