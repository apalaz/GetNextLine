/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:34:12 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/02 15:27:33 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && (i + 1) < n)
		i++;
	return (str1[i] - str2[i]);
}
