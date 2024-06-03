/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 01:45:21 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/27 12:36:30 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		x;

	i = 0;
	x = 0;
	dst = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
		dst[x++] = s1[i++];
	i = 0;
	while (s2[i])
		dst[x++] = s2[i++];
	dst[x] = '\0';
	return (dst);
}
