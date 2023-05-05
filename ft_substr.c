/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:17:17 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 16:15:25 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = s[start];
		i++;
		start ++;
	}
	new_str[start] = '\0';
	return (new_str);
}
/*
int	main()
{
	const char	s[] = "Bonjour hey !";

	printf("str_new : %s\n", ft_substr(s, 2, 7));
}*/