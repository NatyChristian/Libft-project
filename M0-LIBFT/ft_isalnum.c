/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:58:42 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:32:36 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	int a = 44;

	while(a++ < 123)
		printf("%c: %d\n", a, ft_isalnum(a));
	return (0);
}*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
