/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:17:17 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 18:42:31 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			new_str[j] = s[i];
			j++;
		}
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}

// int	main()
// {
// 	const char	s[] = "lorem";

// 	printf("str_new : %s\n", ft_substr(s, 5, 1));
// }