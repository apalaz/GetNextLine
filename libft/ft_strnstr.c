/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:32:26 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/22 23:45:48 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*longstr;

	str = (char*)needle;
	longstr = (char*)haystack;
	i = 0;
	j = 0;
	if (!(str[i]))
		return (&(longstr[i]));
	while (longstr[i] != '\0' && i < len)
	{
		while (longstr[i + j] == str[j] && (i + j) < len)
		{
			j++;
			if (str[j] == '\0')
				return (&(longstr[i]));
		}
		i++;
	}
	return (NULL);
}
