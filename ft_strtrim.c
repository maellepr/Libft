/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:26:07 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/08 18:34:31 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start_diff;
	size_t	end;
	//char	*str;
	
	start_diff = 0;
	while (s1[start_diff] && ft_strchr(set, s1[start_diff]))
		start_diff++;					// start = indice auquel set et s1 different
	end = ft_strlen(s1 + start_diff); 	// end = indice auquel on arrive a la fin de s1
	if (end)
		while (s1[end + start_diff - 1] != 0 && ft_strchr(set, s1[end + start_diff - 1]))
			end--; 						// end = start 
	// str = (char *)malloc(end * sizeof(char) + 1);
	// if (!str)
	// 	return (NULL);
	// strncpy(str, s1 + start_diff, end);
	// return (str);
	return (ft_substr(s1, start_diff, end));
}

// int	main()
// {
// 	char const	s1[] = "acbaaabbbb-- maelle --bccccacb";
// 	char const	set[] = "abc";

// 	printf("s1 : %s\n", ft_strtrim(s1, set));
// }