/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:59:53 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/18 00:33:12 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_index(t_list **head)
{
    int i;
    t_list *current;

    if (!head)
        return ;    
    current = *head;
    i = 0;
    while (current)
    {
        current->index = i++;
        current = current->next;
    }
}

t_list *daron(int gamin, t_list **headA)
{
    t_list *current;
    t_list *daron_actuel;
    
    current = *headA;
    daron_actuel = current;
    if (gamin > (ft_max(headA))->content)
        return(ft_min(headA));
    while (current)
    {
        if (daron_actuel->content < gamin)
            daron_actuel = current;
        if (current->content < daron_actuel->content && current->content > gamin)
            daron_actuel = current;
        current = current->next;
    }
    return (daron_actuel);
}

// price(index, sizepile)
// price(index, sizepile)
int price(int index, int size)
{
    int price;

    if (index < size / 2 + 1)
        price = index;
    else
        price = -(size - index);
// printf("GAMIN = %i | price %i\n", index, size);
    return (price);
}