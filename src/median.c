/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:57:00 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/24 10:13:23 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	median(t_list **headA, t_list **headB)
// {
// 	while (ft_lstsize(*headA) > 3)
// 	{
// 			pb(headA, headB);
// 	}
// }

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
