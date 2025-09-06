/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:25:25 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 21:38:57 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*src;

	i = 0;
	src = (const unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == src[i])
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
