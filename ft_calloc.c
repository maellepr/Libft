/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:07:47 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/16 10:44:05 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		over;

	over = (int)(nmemb * size);
	if (size)
	{
		if (nmemb != ((size_t)over / size))
			return (NULL);
	}
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int	main()
// {
// 	unsigned char	*tab;
// 	int				i;

// 	tab = (unsigned char *)ft_calloc(4, sizeof(char));

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