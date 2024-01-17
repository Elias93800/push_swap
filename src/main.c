/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:25 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/18 00:46:15 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_sort(t_list **headA)
{
	t_list	*current;

	current = *headA;
	if (!(*headA))
		return (0);
	while (current->next)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

// 5
// 1
// 2	2
// A	B

void	print_both(t_list *a, t_list *b)
{
	int	asize;
	int	bsize;

	asize = ft_lstsize(a);
	bsize = ft_lstsize(b);
	if (asize > bsize)
	{
		while (asize > bsize)
		{
			printf("%i| \033[1;32m%i\033[0m\n", a->index, a->content);
			asize--;
			a = a->next;
		}
	}
	else
	{
		while (bsize < asize)
		{
			printf("\t\t\t\033[1;36m%i\033[0m | %i\n", b->content, b->index);
			b = b->next;
			bsize--;
		}
	}
	while (a && b)
	{
		printf("%i| \033[1;32m%i\033[0m\t\t\t\033[1;36m%i\033[0m | %i\n",
			a->index, a->content, b->content, b->index);
		b = b->next;
		a = a->next;
	}
	printf("     -\t\t\t-\n");
	printf("     \033[7;32mA\033[0m\033[7;36m\t\t\tB\033[0m\n\n");
}

int	algo_all(t_list *headA, t_list *headB)
{
	t_list	*tmp;
	int		price_a;
	int		price_b;
	int		total;

	while (ft_lstsize(headA) != 3)
		pb(&headA, &headB);
	sort_3(&headA);
	while (ft_lstsize(headB))
	{
		ft_index(&headA);
		ft_index(&headB);
		print_both(headA, headB);
		while (tmp)
		{
			price_a = price(daron(tmp->content, &headA)->index,
					ft_lstsize(headA));
			price_b = price(tmp->index, ft_lstsize(headB));
			total = abs(price_a) + abs(price_b);
			if (total < )
			tmp = tmp->next;
		}
	}
}
int	main(int argc, char **argv)
{
	t_list *headA = NULL;
	t_list *headB = NULL;

	if (!parse(argc, argv, &headA))
	{
		printf("ERROR\n");
		return (0);
	}
	algo_all(headA, headB);
}