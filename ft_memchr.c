/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:39:37 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:10 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == c)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Bonjour comment ca va?";
	char	*str_return = NULL;
	// on cherche un 'o' sur une taille de 13 octets 
	// doit renvoyer l'adresse a laquelle se trouve o
	str_return = ft_memchr(str, 'o', 13);
	printf("Premiere occurence de o : %s", str_return);
}*/