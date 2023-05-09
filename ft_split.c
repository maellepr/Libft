/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:30:06 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/08 18:34:32 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

char	*ft_strndup(char const *s, size_t n)
{
	char	*str_word;

	str_word = (char *)malloc((n + 1) * sizeof(char));
	if (!str_word)
		return (NULL);
	str_word = ft_cpy(str_word, s, n);
	return (str_word);
}

char	**ft_alloc(char const *s, char c)
{
	size_t	i;
	size_t	size_x;
	char	**str;

	i = 0;
	size_x = 0;
	if (s[0] != c)
	{
		size_x++;
		i++;
	}
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			size_x++;
		i++;
	}
	str = (char **)malloc((size_x + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**str;

	str = ft_alloc(s, c);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (i > j)
		{
			str[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}

int	main()
{
	int i;
	int j;
	char c = 'z';
	char const s[] = "";
	char **strsplit;

	i = 0;
	strsplit = ft_split(s, c);
	while (strsplit[i])
	{
		j = 0;
		while (strsplit[i][j])
		{
			printf("%c", strsplit[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}