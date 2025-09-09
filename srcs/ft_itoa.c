/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:29:55 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/09 14:28:46 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_count(long int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	long	nb;
	char	*str;

	count = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		count = 1;
	}
	count += ft_count(nb);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count > 0)
	{
		count--;
		str[count] = (nb % 10) + 48;
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
