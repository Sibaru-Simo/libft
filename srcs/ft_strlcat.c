/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:35:02 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 17:03:08 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(d);
	src_len = ft_strlen(s);
	if (size <= dest_len)
		return (size + src_len);
	while (i + dest_len + 1 < size && s[i])
	{
		d[i + dest_len] = s[i];
		i++;
	}
	d[dest_len + i] = '\0';
	return (dest_len + src_len);
}
