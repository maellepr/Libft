/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:27:34 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 14:39:01 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(void *elem)
// {
// 	int		len;
// 	char	*content;

// 	len = 0;
// 	content = (char *)elem;
// 	while (content[len])
// 	{
// 		content[len++] = 'd';
// 	}
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst=lst->next;
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
// 	ft_lstiter(lst, &f);
// 	while (lst)
// 	{
// 		printf("%s \n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }