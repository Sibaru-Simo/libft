/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <mel_asla@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 22:56:47 by sidna_7           #+#    #+#             */
/*   Updated: 2025/08/28 23:16:39 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	ft_count_len(int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_helper(char *s, long nb, int index)
{
	s[index] = '\0';
	if (nb == 0)
		s[--index] = '0';
	while (nb > 0)
	{
		index--;
		s[index] = nb % 10 + 48;
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*res;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	len += ft_count_len(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_helper(res, nb, len);
	if (n < 0)
		res[0] = '-';
	return (res);
}
