/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:54:45 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/08 18:54:49 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**dst;
	size_t	len;
	size_t	i;
	size_t	let;

	if (s == NULL)
		return (NULL);
	len = ft_getwords(s, c);
	i = 0;
	if (!(dst = (char **)ft_memalloc(sizeof(char *) * (len + 1))))
		return (NULL);
	dst[len] = (char*)'\0';
	while (len--)
	{
		while ((*s != '\0') && ((char)*s == c))
			s++;
		let = ft_getlet(s, c);
		if (!(dst[i] = (char *)ft_memalloc(sizeof(char) * (let + 1))))
			return (NULL);
		ft_memcpy(dst[i], s, let);
		dst[i++][let] = '\0';
		s = s + let;
	}
	return (dst);
}
