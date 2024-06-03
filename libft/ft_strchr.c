/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:59:20 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/15 14:00:25 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	while (*str)
	{
		if (*str == (char) x)
			return ((char *) str);
		str++;
	}
	if ((char) x == '\0')
		return ((char *) str);
	return (NULL);
}
