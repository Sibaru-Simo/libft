/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:00:31 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/27 21:28:24 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c && i != 0)
		count++;
	return (count);
}

int	ft_mystrlen(char *s, char c)
{
	char	*s1;

	while (*s == c)
		s++;
	s1 = s;
	while (*s1 && *s1 != c)
		s1++;
	return (s1 - s);
}

char	*ft_mystrcpy(char *dest, char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*s1;
	char	**res;
	int		len;

	len = ft_count(s, c);
	s1 = (char *)s;
	i = 0;
	res = malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s1 && i < len)
	{
		while (*s1 == c)
			s1++;
		res[i] = malloc(ft_mystrlen(s1, c) + 1);
		if (!res[i])
			return (NULL);
		ft_mystrcpy(res[i], s1, c);
		s1 += ft_mystrlen(s1, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
