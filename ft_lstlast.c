/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:18:14 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/16 08:23:37 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main()
// {
// 	t_list	phrase1;
// 	t_list	phrase2;
// 	t_list	phrase3;
// 	t_list	phrase4;
// 	t_list	phrase5;
// 	t_list	*lst;

// 	phrase1.content = "haha";
// 	phrase2.content = "hihi";
// 	phrase3.content = "hoho";
// 	phrase4.content = "huhu";
// 	phrase5.content = "hehe";

// 	phrase1.next = &phrase2;
// 	phrase2.next = &phrase3;
// 	phrase3.next = &phrase4;
// 	phrase4.next = &phrase5;
// 	phrase5.next = NULL;
// 	lst = &phrase1;
// 	lst = ft_lstlast(lst);
// 	printf("Le dernier element de la liste : %s \n", (char *)lst->content);
// }