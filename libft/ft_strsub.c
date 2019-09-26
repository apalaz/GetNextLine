/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:35:02 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/31 14:27:42 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*strsub;
	size_t	i;

	if (s)
	{
		strsub = (char*)malloc(sizeof(*strsub) * (len + 1));
		if (!(strsub))
			return (NULL);
		i = 0;
		while (s[i] && i < (len))
		{
			strsub[i] = s[start + i];
			i++;
		}
		strsub[i] = '\0';
		return (strsub);
	}
	return (NULL);
}
