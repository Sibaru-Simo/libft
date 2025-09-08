/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 06:45:21 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/08 20:40:40 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(d);
	s_len = ft_strlen(s);
	if (size <= d_len)
		return (size + s_len);
	while (s[i] && i + d_len < size - 1)
	{
		d[d_len + i] = s[i];
		i++;
	}
	d[d_len + i] = '\0';
	return (s_len + d_len);
}
