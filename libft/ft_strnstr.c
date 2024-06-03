/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:58:02 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/23 19:16:34 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		while ((haystack[i + x] == needle[x]) && (haystack
				[i + x] != '\0') && i + x < len)
		{
			x++;
			if (needle[x] == 0)
				return ((char *) haystack + i);
		}
		i++;
		x = 0;
	}
	return (NULL);
}
