/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:07:05 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/23 13:44:26 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*res;
	unsigned char	*ori;

	res = (unsigned char *) dst;
	ori = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n > 0)
	{
		*res = *ori;
		n--;
		res++;
		ori++;
	}
	return (dst);
}
