/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:07:47 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 13:53:34 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		over;

	over = (int)(size * nmemb);
	if (size)
	{
		if (nmemb != ((size_t)over / size))
			return (NULL);
	}
	ptr = (void *)malloc(nmemb * size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', nmemb);
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