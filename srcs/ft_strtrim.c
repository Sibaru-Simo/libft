/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 01:10:42 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/09 12:02:51 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_check(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_length(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (ft_check(s1[i], s2))
		i++;
	len = ft_strlen(s1);
	len--;
	while (ft_check(s1[len], s2))
		len--;
	return (len - i + 1);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	j = 0;
	len = ft_length(s1, s2);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (ft_check(s1[i], s2))
		i++;
	if (i > len)
		return (0);
	while (j < len && s1[i + j])
	{
		str[j] = s1[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
