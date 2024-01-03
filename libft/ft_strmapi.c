/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:43:01 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/10 16:44:57 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			rest;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	rest = ft_strlen(s);
	res = (char *)malloc(rest + 1);
	if (res == NULL)
		return (NULL);
	while ((size_t)i < rest)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
