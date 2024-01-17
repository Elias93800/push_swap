/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:01 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/18 00:32:09 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_3(t_list **headA)
{
    t_list *min;
    t_list *max;

    min = ft_min(headA);
    max = ft_max(headA);

    if (min->index == 0 && max->index == 1)
        return (rra(headA), sa(headA), 1);
    if (min->index == 1 && max->index == 2)
        return (sa(headA), 1);
    if (min->index == 2 && max->index == 1)
        return (rra(headA), 1);
    if (min->index == 2 && max->index == 0)
        return (ra(headA), sa(headA), 1);
    if (min->index == 1 && max->index == 0)
        return (ra(headA), 1);
    return (1);
}


