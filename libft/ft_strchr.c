/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <kho-gia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:57:00 by kho-gia           #+#    #+#             */
/*   Updated: 2023/01/19 17:53:20 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0)
	{
		c += 256;
	}
	if (c > 255)
	{
		c = c % 256;
	}
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == 0 && c == 0)
		return ((char *)s);
	return (NULL);
}
