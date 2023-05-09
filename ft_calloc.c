/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:07:47 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/08 18:34:26 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * sizeof(size));
	if (nmemb == 0 || size == 0 || !ptr)
		return (NULL);
	memset(ptr, '\0', nmemb);
	return (ptr);
}

// int	main()
// {
// 	unsigned char	*tab;
// 	int				i;
//
// 	tab = (unsigned char *)ft_calloc(4, sizeof(char));
//
// 	i = 0;
// 	printf("tab apres calloc : ");
// 	while (tab[i])
// 	{
// 		printf("%c ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(tab);
// }