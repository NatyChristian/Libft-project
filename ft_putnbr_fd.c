/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 21:03:42 by Jmbolana          #+#    #+#             */
/*   Updated: 2026/02/06 21:03:42 by Jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_putnbr_fd test---------------\n");
// 	printf("test01---------------\n");
// 	ft_putnbr_fd(0,1);
// 	printf("\n");
// 	printf("test02---------------\n");
// 	ft_putnbr_fd(42,1);
// 	printf("\n");
// 	printf("test03-------------\n");
// 	ft_putnbr_fd(-42,1);
// 	printf("\n");
// 	printf("test04---------------\n");
// 	ft_putnbr_fd(INT_MAX,1);
// 	printf("\n");
// 	printf("test05---------------\n");
// 	ft_putnbr_fd(INT_MIN,1);
// 	printf("\n");
// 	return (0);
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
