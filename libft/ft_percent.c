/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:03:34 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/02 17:14:29 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float		ft_percent(float *data, int size, int critical_value, int upper)
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (!(data[i]) && (upper < 0 || upper > 1))
		return (0);
	while (i < size)
	{
		if (upper == 1)
		{
			if (data[i] > critical_value)
				count++;
		}
		else
		{
			if (data[i] < critical_value)
				count++;
		}
		i++;
	}
	return (((float)count / (float)i) * 100);
}
