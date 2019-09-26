/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 00:58:08 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/05 16:56:14 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list *lst, t_list *new)
{
	if (!lst && !new)
		return ;
	while (lst)
		lst = lst->next;
	lst->next = new;
	new->next = NULL;
}
