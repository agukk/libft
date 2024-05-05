/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:17:54 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/05 19:31:34 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	// node pointerがどのメモリを指しているのか、明確にさせる必要がある。そのため、callocでメモリを割り当てる
	node = (t_list *)ft_calloc(1, sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int main()
// {
//     char *str = "help";
//     t_list *test = ft_lstnew(str);
//     printf("%s\n", (char *)test->content);
// }