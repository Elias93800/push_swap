/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:58:33 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/23 16:05:29 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_gnl(t_list_gnl *head, char *content)
{
	t_list_gnl	*current;
	t_list_gnl	*new;

	new = ft_lstnew_gnl(content);
	if (!new)
		return ;
	if (!head)
		head = new;
	else
	{
		current = head;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}

t_list_gnl	*ft_lstnew_gnl(char *content)
{
	t_list_gnl	*new;

	if (!content)
		return (NULL);
	new = malloc(sizeof(t_list_gnl));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list_gnl	*ft_lstlast_gnl(t_list_gnl *lst)
{
	t_list_gnl	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (lst->next)
	{
		if (lst && lst->content)
			free(lst->content);
		last = lst->next;
		free(lst);
		lst = last;
	}
	return (last);
}

int	get_size(t_list_gnl *head)
{
	t_list_gnl	*lst;
	int			i;
	int			size;

	size = 0;
	lst = head;
	i = 0;
	while (lst != NULL && lst->content[i] != '\n')
	{
		if (lst->content[i] == '\0')
		{
			lst = lst->next;
			i = 0;
		}
		else
		{
			i++;
			size++;
		}
	}
	return (size + 1);
}
