/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:32:49 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/18 00:34:15 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


t_list *ft_min(t_list **head)
{
    t_list *current;
    t_list *min;

	current = *head;
    min = current;
	 while (current)
	 {
		if (current->content < min->content)
			min = current;
		current = current->next;
	 }
	 return (min);
}

t_list *ft_max(t_list **head)
{
	t_list *current;
    t_list *max;
 
	current = *head;
    max = current;
	 while (current)
	 {
		if (current->content > max->content)
			max = current;
		current = current->next;
	 }
	 return (max);
}

int abs(int nb)
{
    return (-(nb < 0) * (nb) + (nb > 0) * (nb));
}