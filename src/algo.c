/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:01 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/19 22:00:25 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_3(t_list **headA)
{
	t_list	*min;
	t_list	*max;

	ft_index(headA);
	min = ft_min(headA);
	max = ft_max(headA);
	if (min->index == 0 && max->index == 1)
		return (rra(headA, 0), sa(headA), 1);
	if (min->index == 1 && max->index == 2)
		return (sa(headA), 1);
	if (min->index == 2 && max->index == 1)
		return (rra(headA, 0), 1);
	if (min->index == 2 && max->index == 0)
		return (ra(headA, 0), sa(headA), 1);
	if (min->index == 1 && max->index == 0)
		return (ra(headA, 0), 1);
	return (1);
}

t_price	calc_price(t_list *tmp, t_list *headA, t_list *headB)
{
	t_price	prix;

	prix.price_a = price(daron(tmp->content, &headA)->index, ft_lstsize(headA));
	prix.price_b = price(tmp->index, ft_lstsize(headB));
	prix.total = abs(prix.price_a) + abs(prix.price_b);
	return (prix);
}

t_list *last_sort(t_list *headA, t_list *headB)
{
	t_list	*min;
	
	ft_index(&headA);
	ft_index(&headB);
	min = ft_min(&headA);
	if (min->index > ft_lstsize(headA) / 2)
	{
		while (headA->content != min->content)
			ra(&headA, 0);
	}
	else
		while (headA->content != min->content)
			rra(&headA, 0);
	ft_index(&headA);
	ft_index(&headB);
	return (headA);
}

void	algo_all(t_list **headA, t_list **headB)
{
	t_list	*tmp;
	t_price	price;
	t_price	best;

	while (ft_lstsize(*headA) > 3)
		pb(headA, headB);
	(ft_index(headA), ft_index(headB));
	if (ft_lstsize(*headA) == 3)
		sort_3(headA);
	while (ft_lstsize(*headB))
	{
		(ft_index(headA), ft_index(headB));
		tmp = *headB;
		best.total = INT_MAX;
		while (tmp)
		{
			price = calc_price(tmp, *headA, *headB);
			if (price.total < best.total)
				best = price;
			tmp = tmp->next;
		}
		move(best, headA, headB);
	}
	*headA = last_sort(*headA, *headB);
}

void	move(t_price best, t_list **headA, t_list **headB)
{
	while (best.price_a < 0 && best.price_b < 0)
		(rrr(headA, headB), best.price_a++, best.price_b++);
	while (best.price_a > 0 && best.price_b > 0)
		(rr(headA, headB), best.price_a--, best.price_b--);
	while (best.price_a < 0)
		(rra(headA, 0), best.price_a++);
	while (best.price_a > 0)
		(ra(headA, 0), best.price_a--);
	while (best.price_b < 0)
		(rrb(headB, 0), best.price_b++);
	while (best.price_b > 0)
		(rb(headB, 0), best.price_b--);
	pa(headA, headB);
}
