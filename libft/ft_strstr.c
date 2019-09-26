/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:57:32 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/30 15:43:54 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*str;
	char	*longstr;

	str = (char*)needle;
	longstr = (char*)haystack;
	i = 0;
	if (!(str[i]))
		return (&(longstr[i]));
	while (longstr[i] != '\0')
	{
		j = 0;
		while (longstr[i + j] == str[j])
		{
			if (str[j + 1] == '\0')
				return (&(longstr[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
