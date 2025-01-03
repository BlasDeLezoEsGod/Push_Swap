/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcebria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:30:18 by arcebria          #+#    #+#             */
/*   Updated: 2024/11/25 17:42:01 by arcebria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
#include <stdio.h>
int main(void)
{
    int x = 42;
    t_list *new_node = ft_lstnew(&x);
    if (new_node)
    {
        printf("El contenido del nuevo nodo 
	es: %d\n", *(int *)new_node->content);
        free(new_node);
    }
    else
        printf("Error");
    return(0);
}*/
