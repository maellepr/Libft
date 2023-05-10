/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:30:18 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 16:12:35 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *) s1);
	if (s1 == NULL && len == 0)
		return (NULL);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s2[j] != '\0' && i + j < len)
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)s1 + i);
			}
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     const char  haystack[] = "lorem ipsum dolor sit amet";
//     const char  needle[] = "dolor";
//     printf("%s \n", ft_strnstr(haystack, needle, 15)); 
//     //printf("%s \n", strnstr(haystack, needle, 5));//pas reussi a compiler
// }