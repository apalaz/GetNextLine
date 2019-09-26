/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:34:05 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/28 18:17:26 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s_after_f;
	int		i;

	s_after_f = NULL;
	if (s && f)
	{
		s_after_f = (char*)malloc(sizeof(*s_after_f) * (ft_strlen(s) + 1));
		if (!(s_after_f))
			return (NULL);
		i = 0;
		while (s[i])
		{
			s_after_f[i] = f(s[i]);
			i++;
		}
		s_after_f[i] = '\0';
	}
	return (s_after_f);
}
