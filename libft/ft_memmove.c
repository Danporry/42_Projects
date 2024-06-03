/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:48:24 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/23 16:23:19 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*des;
	char	*ori;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	des = (char *) dst;
	ori = (char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (des > ori)
		while (len-- > 0)
			des[len] = ori[len];
	else
	{
		while (i < len)
		{
			des[i] = ori[i];
			i++;
		}
	}
	return (dst);
}
