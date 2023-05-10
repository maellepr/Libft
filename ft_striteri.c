/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:49:19 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/09 11:41:01 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = 'r';
// 	if (i % 2 != 0)
// 		*c = 'c';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// int main()
// {
// 	char	s[] = "Bonjour je suis la";	
// 	ft_striteri(s, &f);
// 	printf("%s\n", s);
// 	return 0;
// }