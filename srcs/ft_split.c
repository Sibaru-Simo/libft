/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:55 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/09 13:29:00 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (c == s[i] && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

size_t	ft_mystrlen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_advancedup(char *d, char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		d[i] = *s;
		s++;
		i++;
	}
	d[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	*ptr;
	char	**strs;

	i = 0;
	ptr = (char *)s;
	count = ft_count(s, c);
	while (*ptr && *ptr == c)
		ptr++;
	strs = malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i < count)
	{
		strs[i] = malloc(ft_mystrlen(ptr, c) + 1);
		if (!strs[i])
			return (NULL);
		ptr = ft_advancedup(strs[i], ptr, c);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
