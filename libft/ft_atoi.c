/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:55:44 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/05 16:45:22 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_limit(unsigned long long *nb, int sign)
{
	if (sign == 1 && *nb > 9223372036854775807)
		*nb = -1;
	if (sign == -1 && *nb > 9223372036854775807)
		*nb = 0;
	return (*nb);
}

int				ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	ft_check_limit(&nb, sign);
	return (sign * nb);
}
