/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:07:38 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/24 14:16:04 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	int c = 0;
	while (c < 200)
	{
		printf("%d\t%c:\t%d\n",c, c, ft_isascii(c));
		c++;
	}
	return (0);
}*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
