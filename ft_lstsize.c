/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:08:47 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/16 08:24:34 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
// 	printf("La taille de la liste est : %d \n", ft_lstsize(lst));
// }