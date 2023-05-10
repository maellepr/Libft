/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:31:47 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/09 16:49:34 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *) &s[i]);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

// int main()
// {
//     // const char s[] = "Hello";
//     // printf("%s \n", ft_strchr(s, 101)); 

// 	//char	*str;
// 	char	str2[] = "bonjour";

// 	printf("%s \n", ft_strchr(str2, '\0')); 
// }