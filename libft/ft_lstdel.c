/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 12:31:26 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/05 16:54:34 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *current;

	if (!alst || !(*alst) || !del)
		return ;
	current = *alst;
	while (current)
	{
		temp = current->next;
		del(current->content, current->content_size);
		free(current);
		current = temp;
	}
	*alst = NULL;
}
