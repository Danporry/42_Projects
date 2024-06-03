/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:33:42 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/23 15:49:05 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	x;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	x = 0;
	i = len_dst;
	while (src[x] && i < dstsize - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (len_src + len_dst);
}
