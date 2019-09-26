/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:48:53 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/29 18:34:29 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	if (&(s1[i]) > &(s2[i]))
	{
		while (len >= 1)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(s1, s2, len);
	return ((void*)s1);
}
