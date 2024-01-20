/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:10:59 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/19 00:24:18 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void pa(t_list **headA, t_list  **headB)
{
    t_list *tmp;
    if (!*headB)
        return ;
    tmp = (*headB)->next;
    (*headB)->next = *headA;
    *headA = *headB;
    *headB = tmp;
    printf("pa\n"); 
}

void pb(t_list **headA, t_list  **headB)
{
    
    t_list *tmp;
    if (!*headA)
        return ;
    tmp = (*headA)->next;
    (*headA)->next = *headB;
    *headB = *headA;
    *headA = tmp;
    // t_list *tmp;
    // if (!*headA)
    //     return ;
    // tmp = (*headA)->next;
    // if (!*headB)
    // {
    //     *headB = malloc(sizeof(t_list));
    //     (*headA)->next = NULL;
    // }
    // else
    //     (*headA)->next = *headB;
    // *headB = *headA;
    // *headA = tmp;
    printf("pb\n"); 
}

void rrr(t_list **headA, t_list **headB)
{
    printf("rrr\n");
    rra(headA, 1);
    rrb(headB, 1);
}