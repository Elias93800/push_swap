/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:10:59 by emehdaou          #+#    #+#             */
/*   Updated: 2023/12/18 11:02:44 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void pa(t_list **headA, t_list  **headB)
{
    t_list *tmp;
    if (!*headB)
        return ;
    tmp = (*headB)->next;
    if (!*headA)
    {
        *headA = malloc(sizeof(t_list));
        (*headB)->next = NULL;
    }
    else
        (*headB)->next = *headA;
    *headA = *headB;
    *headB = tmp;
}

void pb(t_list **headA, t_list  **headB)
{
    t_list *tmp;
    if (!*headA)
        return ;
    tmp = (*headA)->next;
    if (!*headB)
    {
        *headB = malloc(sizeof(t_list));
        (*headA)->next = NULL;
    }
    else
        (*headA)->next = *headB;
    *headB = *headA;
    *headA = tmp;
}

void rrr(t_list **headA, t_list **headB)
{
    ra(headA);
    rb(headB);
}