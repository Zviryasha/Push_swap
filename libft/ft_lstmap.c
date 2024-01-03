/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 20:35:46 by opanchen          #+#    #+#             */
/*   Updated: 2016/12/11 12:23:56 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sor;

	if (lst)
	{
		sor = (t_list *)malloc(sizeof(f(lst)));
		if (sor == NULL)
			return (NULL);
		sor = f(lst);
		sor->next = ft_lstmap(lst->next, f);
		return (sor);
	}
	return (NULL);
}
