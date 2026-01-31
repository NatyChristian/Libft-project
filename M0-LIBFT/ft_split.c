/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:35:49 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 19:27:52 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static unsigned int	cnt_wrds(char const *s, char c);
static unsigned int	mem_len(char const *s, char c);
static char			**free_tab(char **s, int n);

/*int	main(void)
{
	char	*s =	"AAAAA--BSWFQLM--KMHVKLO--UFKOCPEDFR"
			"-GNGLZUTER-ABSHNABIZUOUYPC-APITHUIS"
			"BRJZB-ZNESMECBGU-QKFVYIMFXOA-XGKAOT-";
	char	c = '-';
	char	**tab = ft_split(s, c);
	int i = 0;
	while (tab[i] != NULL)
	{
		printf("[%d] : %s\n", i + 1, tab[i]);
		i++;
	}
	return (0);
}
*/
static unsigned int	cnt_wrds(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

static unsigned int	mem_len(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] == c)
		i++;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	wrds;
	char			**tab;

	if (!s)
		return (NULL);
	wrds = cnt_wrds(s, c);
	tab = (char **)ft_calloc(sizeof(char *), wrds + 1);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wrds)
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j] = ft_substr(s, i, mem_len(&s[i], c));
		if (!tab[j])
			return (free_tab(tab, j - 1));
		i += mem_len(&s[i], c);
		j++;
	}
	return (tab);
}

static char	**free_tab(char **s, int n)
{
	while (n >= 0)
	{
		free(s[n]);
		n--;
	}
	free(s);
	return (NULL);
}
