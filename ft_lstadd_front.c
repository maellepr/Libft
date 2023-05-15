/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:07:58 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 15:22:17 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int	main()
// {
// 	t_list	new;
// 	t_list	phrase1;
// 	t_list	phrase2;
// 	t_list	phrase3;
// 	t_list	*lst;

// 	new.content = "hello";
// 	new.next = NULL;
// 	phrase1.content = "haha";
// 	phrase2.content = "hihi";
// 	phrase3.content = "hoho";	
// 	phrase1.next = &phrase2;
// 	phrase2.next = &phrase3;
// 	phrase3.next = NULL;
// 	lst = &phrase1;
// 	ft_lstadd_front(&lst, &new);
// 	while (lst)
// 	{
// 		printf("%s \n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }