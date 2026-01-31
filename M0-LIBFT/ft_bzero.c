/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:05:25 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 19:04:20 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
int	main(void)
{
	char a[10] = "aaaaaaaaaa";
	printf("%s\n", a);
	ft_bzero(a, 10);
	printf("%s--\n", a);
	ft_memset(a, 'c',10);
	printf("%s", a);
	return (0);
}
*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
		ptr[i++] = 0;
}
