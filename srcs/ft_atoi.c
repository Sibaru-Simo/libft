/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:41:50 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/15 16:53:33 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skip(const char *s, int index)
{
	while (s[index] == 32 || (s[index] >= 8 && s[index] <= 13))
		index++;
	return (index);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = ft_skip(s, 0);
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (result * sign);
}
