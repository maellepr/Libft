/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:53:14 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:03 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}	
	return (s);
}
/*
int main() 
{
	char	buffer[10] = { 1 };
	int		i;

	i = 0;	
	memset(buffer, 5, 4);
	
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");	
}*/