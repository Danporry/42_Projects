/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:30:16 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/23 16:53:26 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	str = (unsigned char *) s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
