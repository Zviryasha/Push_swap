/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 20:56:15 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/08 20:56:26 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		q;
	int		t;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	q = ft_strlen(s) - 1;
	while (s[q] == ' ' || s[q] == '\n' || s[q] == '\t')
		q--;
	if (i != (int)ft_strlen(s))
		str = (char *)malloc(ft_strlen(s) - i - (ft_strlen(s) - q) + 2);
	else
		str = (char *)malloc(1);
	if (!str)
		return (NULL);
	t = q;
	q = 0;
	while (i <= t)
		str[q++] = s[i++];
	str[q] = '\0';
	return (str);
}
