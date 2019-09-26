/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:41:08 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/31 16:58:21 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

static int		ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

int				ft_isalpha(int c)
{
	return ((ft_isupper(c) || ft_islower(c)) ? 1 : 0);
}
