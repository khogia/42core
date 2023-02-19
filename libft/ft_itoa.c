/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <kho-gia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:39:17 by kho-gia           #+#    #+#             */
/*   Updated: 2023/01/26 20:05:00 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_nbr(int nbr)
{
	unsigned int	size;

	size = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		size = size + 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

static void	ft_itoa_helper(char *str, long long int nbr, int len)
{
	if (nbr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nbr != 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	long long int	nbr;
	int				len;

	len = ft_get_nbr(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	nbr = n;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	ft_itoa_helper(str, nbr, len);
	return (str);
}
