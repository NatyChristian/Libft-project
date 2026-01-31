/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:18:58 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:48:33 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char	*s ="MBOLANANTENAINA";
	char 	*d = ft_substr(s,10,5);

	int i = 0;
	while (s[i] != '\0')
	{
		printf("%d : %c\n",i , s[i]);
		i++;
	}
	printf("%s\n", d);
	return (0);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s[start] != '\0' && i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
