/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:02:54 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/16 13:40:14 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int x)
{
	const char	*last;

	last = (char *) '\0';
	while (*str != '\0')
	{
		if (*str == (char) x)
			last = (char *) str;
		str++;
	}
	if ((char) x == '\0')
		return ((char *) str);
	if (*str == '\0')
		return ((char *) last);
	return (NULL);
}
