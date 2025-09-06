/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:39:22 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 21:46:28 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;

	if (n == 0)
		return (NULL);
	i = n;
	src = (const unsigned char)s;
	while (1)
	{
		if ((unsigned char)c == src[i])
			return ((void)&src[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
