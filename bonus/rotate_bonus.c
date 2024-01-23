/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:11:02 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/23 22:06:15 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_list **headA, int stop)
{
	t_list	*last;

	if (ft_lstsize(*headA) < 2)
		return ;
	last = ft_lstlast(*headA);
	last->next = *headA;
	(*headA) = (*headA)->next;
	last->next->next = NULL;
	(void)stop;
}


void	rb(t_list **headB, int stop)
{
	t_list	*tmp;

	if (ft_lstsize(*headB) < 2)
		return ;
	tmp = (*headB)->next;
	ft_lstadd_back(headB, *headB);
	(*headB)->next = NULL;
	*headB = tmp;
	(void)stop;
}


void	rr(t_list **headA, t_list **headB)
{
	ra(headA, 1);
	rb(headB, 1);
}


void	rra(t_list **headA, int stop)
{
	t_list	*current;

	current = *headA;
	if (ft_lstsize(*headA) < 2)
		return ;
	while (current->next->next)
		current = current->next;
	ft_lstadd_front(headA, ft_lstlast(*headA));
	current->next = NULL;
	(void)stop;
}


void	rrb(t_list **headB, int stop)
{
	t_list	*current;

	current = *headB;
	if (ft_lstsize(*headB) < 2)
		return ;
	while (current->next->next)
		current = current->next;
	ft_lstadd_front(headB, ft_lstlast(*headB));
	current->next = NULL;
	(void)stop;
}

