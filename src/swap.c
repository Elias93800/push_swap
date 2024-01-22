/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:11:05 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/22 05:20:49 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list **head)
{
	t_list	*tmp;

	if (ft_lstsize(*head) < 2)
		return ;
	tmp = (*head)->next->next;
	ft_lstadd_front(head, (*head)->next);
	(*head)->next->next = tmp;
	printf("sa\n");
}

void	sb(t_list **head)
{
	t_list	*tmp;

	if (ft_lstsize(*head) < 2)
		return ;
	tmp = (*head)->next->next;
	ft_lstadd_front(head, (*head)->next);
	(*head)->next->next = tmp;
	printf("sb\n");
}

void	ss(t_list **headA, t_list **headB)
{
	sa(headA);
	sb(headB);
}
