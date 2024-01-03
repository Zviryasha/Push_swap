/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:35:32 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/12 17:35:35 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*tmp;

	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list)
	{
		if (ft_memalloc(content_size) && content_size && content)
		{
			tmp = ft_memalloc(content_size);
			list->content = ft_memcpy(tmp, content, content_size);
			list->content_size = content_size;
		}
		else
		{
			list->content = NULL;
			list->content_size = 0;
		}
	}
	return (list);
}
