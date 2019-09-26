/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 16:23:48 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/02 14:28:21 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_end_spaces(char const *s)
{
	int	cpt;
	int	i;

	cpt = 0;
	i = (int)ft_strlen(s);
	while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'))
	{
		cpt++;
		i--;
	}
	return (cpt);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*strtrim;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	j = ft_strlen(s) - ft_end_spaces(s) - i;
	strtrim = ft_strsub(s, i, j);
	return (strtrim);
}
