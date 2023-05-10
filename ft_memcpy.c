/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:03 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 16:12:39 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	i = 0;
	ptr_dst = dest;
	ptr_src = src;
	if (ptr_dst == NULL && ptr_src == NULL)
		return (NULL);
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
/*
int main() 
{
	const char	*src = "bonjour tout le monde !";
	char		dest[15] =  { 0 };

	ft_memcpy(dest, src, 7);
	printf("src : %s \n", src);
	printf("dest : %s \n", dest);
}*/