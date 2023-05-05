/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:52:14 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 11:58:58 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dst;
	const char	*ptr_src;

	ptr_dst = dest;
	ptr_src = src;
	if (ptr_src <= ptr_dst)
	{
		ptr_dst = ptr_dst + (n - 1);
		ptr_src = ptr_src + (n - 1);
		while (n--)
			*ptr_dst-- = *ptr_src--;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main() 
{
	char tab1 [] = "abcdefghijklmno";

	printf ("tab1 = %s\n", tab1);
	ft_memmove (tab1 + 5, tab1 + 2, 7);
	printf ("tab1 = %s\n", tab1);

	return 0;
}*/