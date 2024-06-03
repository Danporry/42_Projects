/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:30:46 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/24 16:55:26 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	char	*res;

	cpy = (char *) malloc(ft_strlen(s1) + 1);
	if (!cpy)
		return (NULL);
	res = ft_memcpy(cpy, s1, ft_strlen(s1) + 1);
	return (res);
}
