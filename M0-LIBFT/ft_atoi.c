/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:37:33 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/31 08:29:46 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char *c = "			    +---2147483647";

	int	d = ft_atoi(c);
	printf("%d", d);
	return (0);
}*/

int	ft_atoi(const char *nptr)
{
	int	s;
	int	vals;
	int	i;

	s = 1;
	i = 0;
	vals = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13)
		|| nptr[i] == 32)
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		vals = vals * 10 + nptr[i] - '0';
		i++;
	}
	return (vals * s);
}
