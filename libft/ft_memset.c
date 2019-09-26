/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:33:10 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/05 18:02:25 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	x;

	x = (unsigned char)c;
	str = (char*)b;
	i = 0;
	while (i < len)
	{
		str[i] = x;
		i++;
	}
	return (b);
}
