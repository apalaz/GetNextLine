/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:44:21 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/31 14:04:40 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_after_f;

	s_after_f = NULL;
	if (s && f)
	{
		s_after_f = ft_strnew(ft_strlen(s));
		if (!(s_after_f))
			return (NULL);
		i = 0;
		while (s[i])
		{
			s_after_f[i] = f(i, s[i]);
			i++;
		}
	}
	return (s_after_f);
}
