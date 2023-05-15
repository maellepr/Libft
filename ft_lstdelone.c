/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:34:58 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 17:42:04 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// int	main()
// {
// 	t_list	phrase1;
// 	t_list	phrase2;
// 	t_list	phrase3;
// 	t_list	*lst;

// 	phrase1.content = "haha";
// 	phrase2.content = "hihi";
// 	phrase3.content = "hoho";
	
// 	phrase1.next = &phrase2;
// 	phrase2.next = &phrase3;
// 	phrase3.next = NULL;
// 	lst = &phrase1;
// 	ft_lstdelone(lst, &del);
// 	while (lst)
// 	{
// 		printf("%s \n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }