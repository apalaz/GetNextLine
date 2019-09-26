/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_name_for_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:28:31 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/05 15:32:49 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_name_for_data(char *name)
{
	int i;

	if (!name)
		return (NULL);
	i = 0;
	if ((name[i] > 64 && name[i] < 91) || (name[i] > 96 && name[i] < 123))
	{
		name[i] = ft_toupper(name[i]);
		i++;
	}
	while ((name[i]) && ((name[i] > 64 && name[i] < 91)
						|| (name[i] > 96 && name[i] < 123)))
	{
		name[i] = ft_tolower(name[i]);
		i++;
	}
	if (name[i] == '\0')
		return (name);
	return (0);
}
