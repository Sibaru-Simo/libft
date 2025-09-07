/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:45:44 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/07 06:43:22 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t size)
{
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (size == 0)
		return (s_len);
	while (s[i] && i < size - 1)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (s_len);
}
