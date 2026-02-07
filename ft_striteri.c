/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:32:53 by Jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 08:47:31 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	ft_toupperv2(unsigned int i, char *ch)
// {
// 	(void)i;
// 	*ch = ft_toupper(*ch);
// }

// int	main(void)
// {
// 	char	strstart[] = "MbolanxxxxaAAantenaina jEaN";

// 	ft_striteri(strstart, ft_toupperv2);
// 	printf("%s\n", strstart);
// 	return (0);
// }
