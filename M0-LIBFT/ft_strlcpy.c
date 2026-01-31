/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 20:38:34 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:44:15 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char src[16] = "Mbolanantenaina";
	char dest[17];

	ft_strlcpy(dest, src, sizeof(char) * ft_strlen(src) + 1);
	printf("%s\n", dest);
	return (0);
}*/

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;
	size_t	len;

	if (!source)
		return (0);
	len = ft_strlen(source);
	if (!destination || size == 0)
		return (len);
	i = 0;
	while (source[i] != '\0' && i < (size - 1))
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (len);
}
