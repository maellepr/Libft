/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:31:55 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 17:02:14 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;

    i = 0;
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    while (dst[i] != '\0' && i < dstsize)
        i++;
    while(src[j] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    if (dstsize != 0 && dstsize >= dst_len)
        dst[i] = '\0';
    if (dstsize < dst_len)
        return (src_len + dstsize);
    // si size (variable d'entrée) plus petit que longueur de dst
    // retourner longueur src + size
    else
        return (src_len + dst_len);
    // sinon (size plus grand que longueur de dst)
    // retourner longeur de src + longueur de dst
}
/*
int main()
{
    char    dst[] = "Hello";
    char    src[] = "Hellao";

    //printf("%zu \n", ft_strlcat(dst, src, 4));
    printf("%zu \n", strlcat(dst, src, 4));
}*/