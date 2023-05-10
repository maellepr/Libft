/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:41:15 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/09 15:55:15 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*str_dup;
// 	str_dup = strdup(str);
// 	printf("%s", ft_strdup);
// 	// const char	s[] = "Bonjour he";	
// 	// printf("%s", ft_strdup(s));
// 	//printf("%s", strdup(s));
// 	// free(s);
// }