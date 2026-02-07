/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:31:21 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:36:22 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char *s1 = "MBOL/NANTENAINA";
	char *s2 = "MBOLANANTENAINA";
	int  d = ft_memcmp(s1, s2, 15);

	printf("%d\n", d);
	return (0);
}*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_s1;
	unsigned char	*s_s2;
	size_t			i;

	if (n == 0)
		return (0);
	s_s1 = (unsigned char *)s1;
	s_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_s1[i] != s_s2[i])
			return (s_s1[i] - s_s2[i]);
		i++;
	}
	return (0);
}
