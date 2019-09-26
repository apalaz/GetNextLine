/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:19:12 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/30 17:23:29 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	mem = (char*)malloc(sizeof(*mem) * (size + 1));
	if (!(mem))
		return (NULL);
	ft_bzero(mem, size + 1);
	return (mem);
}
