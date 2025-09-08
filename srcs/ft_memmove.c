/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 23:37:41 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/08 23:46:02 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char		*p1;
	unsigned const char	*p2;
	size_t				i;

	i = 0;
	p1 = d;
	p2 = s;
	if (s < d)
	{
		while (n > 0)
		{
			n--;
			p1[n] = p2[n];
		}
	}
	else
	{
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (d);
}
