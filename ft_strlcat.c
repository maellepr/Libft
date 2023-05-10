/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:31:55 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 16:12:37 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	while (src[i] && i < (size - len_dst - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// int main()
// {
//     // char    dst[] = "Hello";
//     // char    src[] = "Hey";
//     // //memset(dst, 'r', 0);
// 	// // printf("%s \n", dst);
// 	// // printf("%s \n", src);
// 	// // printf("ft strlcat : %zu \n", ft_strlcat(dst, src, 0));
// 	// // printf("dst : %s", dst);
//     // printf("strlcat    : %zu \n", strlcat(dst, src, 0));
// 	// printf("dst : %s", dst);
// 	char	b[0xF] = "nyan !";
// 	strlcat(NULL, b, 0);
// }