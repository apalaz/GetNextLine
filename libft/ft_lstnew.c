/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 15:20:07 by apalaz            #+#    #+#             */
/*   Updated: 2018/11/02 17:52:06 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_element;

	new_element = (t_list*)malloc(sizeof(*new_element));
	if (!(new_element))
		return (NULL);
	if (content == NULL)
	{
		new_element->content = NULL;
		new_element->content_size = 0;
	}
	else
	{
		new_element->content = malloc(sizeof(*new_element) * content_size);
		if (!(new_element->content))
		{
			free(new_element);
			return (NULL);
		}
		ft_memcpy(new_element->content, content, content_size);
		new_element->content_size = content_size;
	}
	new_element->next = NULL;
	return (new_element);
}
