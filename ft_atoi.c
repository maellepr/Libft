/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:34:42 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/10 10:05:09 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checksign(const char *str)
{
	int	i;
	int	c;
	int	sign;

	i = 0;
	c = 0;
	sign = '+';
	while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = '-';
		i++;
		c++;
	}
	if (c > 1)
		return (0);
	else
		return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (ft_checksign(str) == '-' || ft_checksign(str) == '+')
	{
		while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
			i++;
		while (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] <= '9' && str[i] >= '0')
		{
			nb = nb * 10 + (str[i] - '0');
			i++;
		}
	}
	if (ft_checksign(str) == '-')
		return (nb * (-1));
	return (nb);
}

// int	main ()
// {
// 	printf("%d\n", ft_atoi("546:5"));
// 	printf("%d\n", atoi("546:5"));
// }