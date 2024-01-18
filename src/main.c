/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:25 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/18 03:13:43 by emehdaou         ###   ########.fr       */
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
			fprintf(stderr,"%i| \033[1;32m%i\033[0m\n", a->index, a->content);
			asize--;
			a = a->next;
		}
	}
	else
	{
		while (bsize < asize)
		{
			fprintf(stderr,"\t\t\t\033[1;36m%i\033[0m | %i\n", b->content, b->index);
			b = b->next;
			bsize--;
		}
	}
	while (a && b)
	{
		fprintf(stderr,"%i| \033[1;32m%i\033[0m\t\t\t\033[1;36m%i\033[0m | %i\n",
			a->index, a->content, b->content, b->index);
		b = b->next;
		a = a->next;
	}
	fprintf(stderr,"     -\t\t\t-\n");
	fprintf(stderr,"     \033[7;32mA\033[0m\033[7;36m\t\t\tB\033[0m\n\n");
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