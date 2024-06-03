/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:12:48 by dporras-          #+#    #+#             */
/*   Updated: 2024/05/27 13:21:38 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (lst == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_element = ft_lstnew(NULL);
		if (new_element == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_element->content = f(lst->content);
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
