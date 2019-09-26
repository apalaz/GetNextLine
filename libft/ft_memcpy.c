/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:46:43 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/22 22:20:37 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
