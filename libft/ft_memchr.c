/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:12:03 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/29 18:05:28 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*str;

	x = (unsigned char)c;
	str = (unsigned char*)s;
	i = 0;
	while ((i < n) && (str[i] != x))
		i++;
	if (i < n)
		return ((void*)&str[i]);
	return (NULL);
}
