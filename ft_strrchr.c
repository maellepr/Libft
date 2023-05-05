/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:38:07 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:07 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	size_t	i;

	chr = (char)c;
	i = strlen(s);
	while (i > 0)
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int main()
{
    const char s[] = "Hello my favorite gamer";

    printf("%s \n", ft_strrchr(s, 109)); 
}*/