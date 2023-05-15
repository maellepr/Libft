/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:30:06 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/15 16:27:52 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copyword(char const *s, int i_begin, int i_end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((i_end - i_begin + 1) * sizeof(char));
	if (!word)
		return (0);
	while (i_begin < i_end)
	{
		word[i] = s[i_begin];
		i++;
		i_begin++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		index;
	char	**new_str;

	new_str = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!new_str || !s)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			new_str[j++] = ft_copyword(s, index, i);
			index = -1;
		}
		i++;
	}
	new_str[j] = 0;
	return (new_str);
}

// int	main()
// {
// 	int i;
// 	int j;
// 	char c = ' ';
// 	char const s[] = "  lorem ipsum dolor sit amet, consecteturs";
// 	char **strsplit;

// 	i = 0;
// 	strsplit = ft_split(s, c);
// 	while (strsplit[i])
// 	{
// 		j = 0;
// 		while (strsplit[i][j])
// 		{
// 			printf("%c", strsplit[i][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// }