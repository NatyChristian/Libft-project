/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:00:49 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:35:32 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char *s = "Mbolanantenaina";
	char c = 'i';

	char *d = ft_memchr(s,c,ft_strlen(s)-1);

	printf("%p %c : %p %c\n", d, *d,  &s[12], s[12]);
	return (0);
}*/

void	*ft_memchr(const void	*s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return (d + i);
		i++;
	}
	return (NULL);
}
