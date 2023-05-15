/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:26:07 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 16:24:39 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	diff;
	size_t	end;

	diff = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[diff] && ft_strchr(set, s1[diff]))
		diff++;
	end = ft_strlen(s1 + diff);
	if (end)
		while (s1[end + diff - 1] != 0 && ft_strchr(set, s1[end + diff - 1]))
			end--;
	return (ft_substr(s1, diff, end));
}

// int	main()
// {
// 	char const	s1[] = "acbaaabbbb-- maelle --bccccacb";
// 	char const	set[] = "abc";

// 	printf("s1 : %s\n", ft_strtrim(s1, set));
// }