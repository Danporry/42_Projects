/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:58:38 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/24 17:44:28 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*x;
	size_t			i;

	i = 0;
	x = malloc(count * size);
	if (!x)
		return (NULL);
	while (i < count * size)
	{
		x[i] = 0;
		i++;
	}
	return (x);
}
