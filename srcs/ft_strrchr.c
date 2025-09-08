/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 00:01:12 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/09 00:08:15 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;

	i = ft_strlen(s);
	i--;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
