/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 00:12:57 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/16 14:37:47 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	total;

	total = count * size;
	if (size != 0 && total / size != count)
		return (NULL);
	s = malloc(total);
	if (!s)
		return (NULL);
	memset(s, 0, count * size);
	return (s);
}
