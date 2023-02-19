/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <kho-gia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 21:02:03 by kho-gia           #+#    #+#             */
/*   Updated: 2023/01/19 17:53:16 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = NULL;
	c = c % 128;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			l = ((char *)s);
		}
		s++;
	}
	if (*s == 0 && c == 0)
		return ((char *)s);
	return (l);
}
