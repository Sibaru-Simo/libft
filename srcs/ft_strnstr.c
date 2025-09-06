/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:17:41 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 23:06:33 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2)
		return ((char)s1);
	while (i < n && s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < n)
		{
			j++;
			if (s2[j] == '\0')
				return (&s1[i]);
		}
		i++;
	}
	return (NULL);
}
