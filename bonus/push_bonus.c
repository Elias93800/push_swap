/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:10:59 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/23 22:04:24 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list **headA, t_list **headB)
{
	t_list	*tmp;

	if (!*headB)
		return ;
	tmp = (*headB)->next;
	(*headB)->next = *headA;
	*headA = *headB;
	*headB = tmp;
}

void	pb(t_list **headA, t_list **headB)
{
	t_list	*tmp;

	if (!*headA)
		return ;
	tmp = (*headA)->next;
	(*headA)->next = *headB;
	*headB = *headA;
	*headA = tmp;
}

void	rrr(t_list **headA, t_list **headB)
{
	rra(headA, 1);
	rrb(headB, 1);
}
