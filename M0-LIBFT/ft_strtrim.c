/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:49:26 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:47:14 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static	unsigned int	countset(char const *s1, char const *set);
static	unsigned int	isin(char const ch, char const *s);

/*int	main(void)
{
	char 	*s1 = "MBOLANANTENAINA";
	char	*set = "AI";
	char	*s = ft_strtrim(s1, set);
	printf("%s\n", s);
	return (0);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	setcount;
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	char			*newstring;

	setcount = countset(s1, set);
	len = (unsigned int)ft_strlen(s1) - setcount;
	newstring = malloc(sizeof(char) * (len + 1));
	if (!newstring)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!isin(s1[i], set))
		{
			newstring[j] = s1[i];
			j++;
		}
		i++;
	}
	newstring[j] = '\0';
	return (newstring);
}

static	unsigned int	countset(char const *s1, char const *set)
{
	unsigned int	setcount;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	setcount = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				setcount++;
			j++;
		}
		i++;
	}
	return (setcount);
}

static	unsigned int	isin(char const ch, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
