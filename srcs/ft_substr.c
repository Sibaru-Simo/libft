/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:32:02 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/21 14:59:45 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*src;

	s_len = ft_strlen(s);
	i = 0;
	if (s_len <= start)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	src = malloc(len + 1);
	if (!src)
		return (NULL);
	while (s[start + i] && i < len)
	{
		src[i] = s[start + i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
