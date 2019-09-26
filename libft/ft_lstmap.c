/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:12:46 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/05 15:44:49 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free_newlst(t_list **first_elem, t_list *new_lst)
{
	t_list	*temp;

	while (*first_elem != new_lst)
	{
		temp = (*first_elem)->next;
		free((*first_elem)->content);
		free(*first_elem);
		*first_elem = temp;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*first_elem;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	new_lst = ft_lstnew(temp->content, temp->content_size);
	if (!(new_lst))
		return (NULL);
	first_elem = new_lst;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		new_lst->next = ft_lstnew(temp->content, temp->content_size);
		if (!(new_lst))
		{
			ft_free_newlst(&first_elem, new_lst);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (first_elem);
}
