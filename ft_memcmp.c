/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:38:27 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 14:42:44 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
		{
			return ((unsigned char)*str1 - (unsigned char)*str2);
		}
		str1++;
		str2++;
	}
	return (0);
}

// int	main()
// {
// //    unsigned char tab1 [4] = { 'a', 'b', '\0', 'c' };
// //    unsigned char tab2 [4] = { 'a', 'b', '\0', 'c' };
// //    unsigned char tab3 [4] = { 'a', 'b', 'c', 'h' };
// //    unsigned char tab4 [4] = { 'a', 'b', 'a', 'h' };
//    unsigned char tab5 [] = "";
//    unsigned char tab6 [4] = { 'a', 'b', 'c', 'd' };

// //    printf ("Test 1 : %d\n", ft_memcmp (tab1, tab2, 5));
// //    printf ("Test 2 : %d\n", ft_memcmp (tab2, tab3, 5));
//    printf ("Test 3 : %d\n", ft_memcmp (tab5, tab6, 5));
//    return 0;
// }