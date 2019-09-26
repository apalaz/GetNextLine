/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:12:44 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/02 15:49:49 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*s1;
	unsigned char	*s2;

	x = (unsigned char)c;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	i = 0;
	while ((i < n) && (s2[i] != x))
	{
		s1[i] = s2[i];
		i++;
	}
	if (i < n)
	{
		s1[i] = s2[i];
		return ((void*)&s1[i + 1]);
	}
	return (NULL);
}
