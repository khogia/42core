/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <kho-gia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:09:21 by kho-gia           #+#    #+#             */
/*   Updated: 2023/01/26 20:39:50 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**string;
	size_t		i;
	size_t		start;
	size_t		end;

	start = 0;
	end = 0;
	i = 0;
	if (!s)
		return (NULL);
	string = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	while (i < ft_count(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		string[i] = ft_substr(s, start, (end - start));
		start = end;
		i++;
	}
	string[i] = 0;
	return (string);
}
