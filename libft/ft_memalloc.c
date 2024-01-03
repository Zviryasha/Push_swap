/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 13:47:17 by opanchen          #+#    #+#             */
/*   Updated: 2016/11/27 13:55:03 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = (void *)malloc(sizeof(void *) * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
