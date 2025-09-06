/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:03:22 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 22:17:02 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	s = malloc (count * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, count * size);
	return ((void *)s);
}
