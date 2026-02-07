/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:12:41 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:39:54 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char	a[10];
	ft_memset(a,'a',sizeof(char)*10);
	//memset(a,'a',sizeof(char)*10);
	printf("%s", a);
	return (0);
	
}*/

void	*ft_memset(void	*str, int ch, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
		ptr[i++] = (unsigned char)ch;
	return (str);
}
