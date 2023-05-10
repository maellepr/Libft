/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:31:55 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 09:20:08 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	if (size == len_dst)
		return (ft_strlen(src) + len_dst);
	if (size > len_dst)
	{
		while (src[i] && i < (size - len_dst - 1))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_dst + ft_strlen(src));
	}
	else
		return (ft_strlen(src) + size);
}

// int main()
// {
//     char    dst[] = "";
//     char    src[] = "lorem ipsum dolor sit amet";
//     memset(dst, 'r', 15);
// 	// printf("%s \n", dst);
// 	// printf("%s \n", src);
// 	// printf("ft strlcat : %zu \n", ft_strlcat(dst, src, 0));
// 	// printf("dst : %s", dst);
//     printf("strlcat    : %zu \n", strlcat(dst, src, 0));
// 	printf("dst : %s", dst);
// }