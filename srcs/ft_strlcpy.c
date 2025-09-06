/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:28:12 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/20 15:34:15 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && s[i])
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (ft_strlen(s));
}
