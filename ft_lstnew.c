/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:38:51 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 14:30:15 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(*new_element));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

// int	main(void)
// {
// 	char	content[] = "haha hihi hoho";
// 	t_list	*list;

// 	list = ft_lstnew(content);
// 	printf("%s\n", (char *)list->content);
// 	printf("%p\n", list->next);
// 	free(list);
// 	return (0);
// }