/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:10:36 by dporras-          #+#    #+#             */
/*   Updated: 2024/05/27 13:19:20 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_temp;

	while (*lst != NULL)
	{
		lst_temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_temp;
	}
	*lst = NULL;
}
