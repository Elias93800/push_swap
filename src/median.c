/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:57:00 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/23 17:34:12 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	median(t_list **headA, t_list **headB)
{
	// t_list	*tmp;
	// int		median;

	// median = ft_lstsize(*headA) / 2;
	while (ft_lstsize(*headA) > 3)
	{
		// tmp = *headA;
		// if (tmp->content > median && ft_lstsize(*headA) > median)
		// 	pb(headA, headB);
		// else if (tmp->content < median && ft_lstsize(*headA) > median)
		// 	ra(headA, 0);
		// else
			pb(headA, headB);
	}
}

void	sort_5(t_list **headA, t_list **headB)
{
	t_list	*current;

	current = *headA;
	if (current->content > current->next->content)
		sa(headA);
	pb(headA, headB);
	pb(headA, headB);
	sort_3(headA);
	pa(headA, headB);
	pa(headA, headB);
}

void	sort_2(t_list **headA)
{
	t_list	*current;

	current = *headA;
	if (current->content > current->next->content)
		sa(headA);
}
