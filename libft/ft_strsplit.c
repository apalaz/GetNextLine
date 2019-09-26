/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 15:11:18 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/02 14:49:59 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_skipcharac(char const **s, char c)
{
	while (**s == c)
		(*s)++;
}

static int		ft_countwords(char const *s, char c)
{
	int		i;
	int		countword;

	i = 0;
	countword = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			countword++;
		}
		i++;
	}
	return (countword);
}

static int		ft_count_letters(char const *s, char c)
{
	int nb_letters;

	nb_letters = 0;
	while (*s != c)
	{
		nb_letters++;
		s++;
	}
	return (nb_letters);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		nb_letters;
	char	**str;

	if (!s || !(str = (char**)malloc(sizeof(*str) *
						(ft_countwords(s, c) + 1))))
		return (NULL);
	k = ft_countwords(s, c);
	i = 0;
	while (i < k)
	{
		ft_skipcharac(&s, c);
		nb_letters = ft_count_letters(s, c);
		if (!(str[i] = (char*)malloc(sizeof(str) * (nb_letters + 1))))
			return (NULL);
		j = 0;
		while (j < nb_letters)
			str[i][j++] = *s++;
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
