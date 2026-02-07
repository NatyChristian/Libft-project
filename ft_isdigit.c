/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:53:00 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/24 13:57:35 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	int a = 44;
	while (a++ < 63)
		printf("%c : %d\n", a, ft_isdigit(a));
	return (0);
}
*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
