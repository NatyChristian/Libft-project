/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:30:46 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 16:42:29 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_nodes;
	t_list	*next_nodes;

	if (!lst || !(*lst) || !del)
		return ;
	current_nodes = *lst;
	while (current_nodes)
	{
		next_nodes = current_nodes -> next;
		ft_lstdelone(current_nodes, del);
		current_nodes = next_nodes;
	}
	*lst = NULL;
}

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%p -> ", (void *)lst);
// 		printf("%d\n", *(int *)(lst->content));
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	int value1 = 42;
// 	int value2 = 99;
// 	int value3 = 1;
// 	int value4 = 4;
// 	int value5 = 9;
// 	int value6 = 10;
// 	int value7 = 909;
// 	int value8 = 467;
// 	int value9 = 8942;

// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(&value1);
// 	t_list *node2 = ft_lstnew(&value2);
// 	t_list *node3 = ft_lstnew(&value3);
// 	t_list *node4 = ft_lstnew(&value4);
// 	t_list *node5 = ft_lstnew(&value5);
// 	t_list *node6 = ft_lstnew(&value6);
// 	t_list *node7 = ft_lstnew(&value7);
// 	t_list *node8 = ft_lstnew(&value8);
// 	t_list *node9 = ft_lstnew(&value9);

// 	ft_lstadd_front(&lst, node9);
// 	ft_lstadd_front(&lst, node8);
// 	ft_lstadd_front(&lst, node7);
// 	ft_lstadd_front(&lst, node6);
// 	ft_lstadd_front(&lst, node5);
// 	ft_lstadd_front(&lst, node4);
// 	ft_lstadd_front(&lst, node3);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_back(&lst, node1);

// 	printf("List before clearing the list:\n");
// 	print_list(lst);

// 	printf("List after  clearing the list: \n");
// 	ft_lstclear(&lst,free);
// 	print_list(lst);
// 	return (0);
// }