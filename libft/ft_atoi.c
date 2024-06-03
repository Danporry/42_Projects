/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:07:28 by dporras-          #+#    #+#             */
/*   Updated: 2024/04/24 12:57:48 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	spaces(int x)
{
	if (x == 9 || x == 10 || x == 11 || x == 12 || x == 13 || x == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	res;

	i = 0;
	sig = 1;
	res = 0;
	while (spaces(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sig *= -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	res *= sig;
	return (res);
}
