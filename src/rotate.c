/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:11:02 by emehdaou          #+#    #+#             */
/*   Updated: 2023/12/05 20:52:15 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ra(t_list **headA)
{
    t_list *tmp;
    
    tmp = (*headA)->next;
    ft_lstadd_back(headA, *headA);
    (*headA)->next = NULL;
    *headA = tmp; 
}

void rb(t_list **headB)
{
    t_list *tmp;
    
    tmp = (*headB)->next;
    ft_lstadd_back(headB, *headB);
    (*headB)->next = NULL;
    *headB = tmp; 
}

void rr(t_list **headA, t_list **headB)
{
    ra(headA);
    rb(headB);  
}

void rra(t_list **headA)
{
    t_list *current;
    current = *headA;
	while (current->next->next)
		current = current->next;
    ft_lstadd_front(headA, ft_lstlast(*headA));
    current->next = NULL;
}

void rrb(t_list **headB)
{
    t_list *current;
    current = *headB;
	while (current->next->next)
		current = current->next;
    ft_lstadd_front(headB, ft_lstlast(*headB));
    current->next = NULL;
}