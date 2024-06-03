/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporras- <dporras-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:41:19 by dporras-          #+#    #+#             */
/*   Updated: 2024/05/28 11:33:49 by dporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, int c);
static int	ft_wordlen(char const *s, char c);
static void	*ft_free(char **matrix, int words);
static char	**ft_fill(char const *s, int words, char c, char **matrix);

static int	ft_countwords(const char *s, int x)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s == NULL || s[0] == '\0')
		return (0);
	if (s[0] != x)
		words++;
	while (s[i] != '\0')
	{
		if (s[i] == x && s[i + 1] != '\0' && s[i + 1] != x)
			words++;
		i++;
	}
	return (words);
}

static int	ft_wordlen(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	*ft_free(char **mem_free, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(mem_free[i]);
		i++;
	}
	free(mem_free);
	return (NULL);
}

static char	**ft_fill(char const *s, int words, char c, char **matrix)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_wordlen(s, c);
		matrix[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (matrix[i] == NULL)
			return (ft_free(matrix, i));
		j = 0;
		while (j < len)
			matrix[i][j++] = *s++;
		matrix[i][j] = '\0';
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	matrix = ft_fill(s, words, c, matrix);
	return (matrix);
}
