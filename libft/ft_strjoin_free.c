/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:29:22 by apalaz            #+#    #+#             */
/*   Updated: 2018/12/14 15:51:36 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2, int frees1, int frees2)
{
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	strjoin = (char*)malloc(sizeof(*strjoin) *
				(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(strjoin))
		return (NULL);
	ft_strcpy(strjoin, s1);
	ft_strcat(strjoin, s2);
	if (frees1 == 1)
		free((void*)s1);
	if (frees2 == 1)
		free((void*)s2);
	return (strjoin);
}
