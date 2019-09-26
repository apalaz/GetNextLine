/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 11:24:07 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/31 16:54:58 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countnbchar(int n, int *i)
{
	*i = 0;
	if (n == -2147483648)
	{
		*i = 11;
		return (*i);
	}
	if (n < 0)
	{
		(*i)++;
		n = -(n);
	}
	if (n == 0)
		(*i)++;
	while (n > 0)
	{
		(*i)++;
		n /= 10;
	}
	return (*i);
}

static void		ft_check_int_min(int *n, char *str, int *i)
{
	if (*n == -2147483648)
	{
		*str = (*n % 10) * -1 + 48;
		str--;
		*n /= 10;
		(*i)--;
	}
}

char			*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*str;

	neg = 0;
	if (!(str = (char*)malloc(sizeof(*str) * ft_countnbchar(n, &i) + 1)))
		return (NULL);
	str[i--] = '\0';
	ft_check_int_min(&n, &(str[i]), &i);
	if (n < 0)
	{
		neg = 1;
		n = -(n);
	}
	if (n == 0)
		str[i] = n + 48;
	while (i >= 0 && n > 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	if (neg == 1)
		str[i] = '-';
	return (str);
}
