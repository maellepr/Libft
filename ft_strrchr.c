/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:38:07 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/09 17:09:34 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = (char)c;
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
//     const char s[] = "";

//     printf("%s \n", ft_strrchr(s, '\0')); 
// }