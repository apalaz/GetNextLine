/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 11:22:25 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/22 23:30:15 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int		i;
	char	x;
	char	*str;

	x = (char)c;
	str = (char*)s;
	i = 0;
	while ((str[i] != '\0') && (str[i] != x))
		i++;
	if (str[i] == x)
		return (&str[i]);
	return (NULL);
}
