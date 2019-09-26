/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:02:30 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/22 22:53:34 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	srclen;
	size_t	destlen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	n = size;
	while (*dest && n > 0)
	{
		dest++;
		n--;
	}
	if (n == 0)
		return (srclen + size);
	while (*src && (n - 1) > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (destlen + srclen);
}
