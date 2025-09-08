/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 23:50:34 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/08 23:55:10 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = s;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
