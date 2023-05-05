/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:30:34 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:08 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int    main()
{
    char    str1[] = "Hfllo";
    char    str2[] = "Hellp";
    
    printf("%d \n", ft_strncmp(str1, str2, 3));
} 

int main (void)
{
   char * str1 = "abcdefghij";
   char * str2 = "abcdefghij";
   char * str3 = "abcefghijk";
   char * str4 = "abbcdefghi";
 
   printf ("Test 1 : %d\n", ft_strncmp (str1, str2, 4));
   printf ("Test 2 : %d\n", ft_strncmp (str2, str3, 4));
   printf ("Test 3 : %d\n", ft_strncmp (str3, str4, 4));
 
   return 0;
}*/