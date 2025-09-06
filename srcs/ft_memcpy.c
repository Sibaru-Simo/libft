/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:57:02 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 20:26:34 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)d;
	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (d);
}
