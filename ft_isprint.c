/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:20:40 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/24 14:26:21 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	int c = 0;
	while (c < 128)
	{
		printf("%d\t%c\t%d\n", c,c,ft_isprint(c));
		c++;
	}
	return (0);
}*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
