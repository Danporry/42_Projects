/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:13:08 by dporras-          #+#    #+#             */
/*   Updated: 2024/05/07 13:48:06 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *) malloc(ft_strlen(s) + 1);
	if (!tmp)
		return (NULL);
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
