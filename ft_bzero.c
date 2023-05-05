/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:55 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:05 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
int main() 
{
	char	buffer[10];
	int		i;

	i = 0;	
	memset(buffer, '5', sizeof(char) * 10);
	ft_bzero(buffer, 2);
	
	while (i != 10)
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");	
}*/