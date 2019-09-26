/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:29:02 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/22 23:45:07 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		strlen;
	char	x;
	char	*str;

	str = (char*)s;
	strlen = ft_strlen(str);
	x = (char)c;
	if (x == '\0')
		return (&(str[strlen]));
	while ((strlen >= 0) && (str[strlen] != x))
		strlen--;
	if (str[strlen] == x)
		return (&(str[strlen]));
	return (NULL);
}
