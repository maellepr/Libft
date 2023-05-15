/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:58:10 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 17:39:03 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*beginning;

	if (!lst)
		return (NULL);
	newlist = ft_lstnew((*f)(lst->content));
	if (!newlist)
		return (NULL);
	beginning = newlist;
	lst = lst->next;
	while (lst)
	{
		newlist->next = ft_lstnew((*f)(lst->content));
		if (!newlist->next)
		{
			ft_lstclear(&beginning, (*del));
			return (NULL);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	return (beginning);
}