/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:04:30 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/09 09:29:39 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_zero(char *str)
{
	str[0] = '0';
	return (str);
}

int	ft_countdigit(long int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count += 1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		str_size;
	char	*str;

	nb = n;
	str_size = ft_countdigit(nb);
	str = (char *)malloc(sizeof(char) * str_size + 1);
	if (!str)
		return (0);
	str[str_size] = '\0';
	if (nb == 0)
		ft_zero(str);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str_size -= 1;
	while (nb > 0)
	{
		str[str_size] = nb % 10 + '0';
		nb = nb / 10;
		str_size--;
	}
	return (str);
}
// int	main()
// {
// 	printf("%s \n", ft_itoa(2147483647));
// }