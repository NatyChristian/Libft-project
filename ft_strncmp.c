/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:31:36 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 09:19:14 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int	ft_strncmp(const char *s1, const char *s2, size_t n);

// int	main(void)
// {
// 	char *s1 = "test\200";
// 	char *s2 = "test\0";
// 	int    d = ft_strncmp(s1, s2, 6);

// 	printf("%d\n", d);
// 	return (0);
// }

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	if (i == n && i > 0)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
