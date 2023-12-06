/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:25 by emehdaou          #+#    #+#             */
/*   Updated: 2023/12/05 20:39:01 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_list *first_node, char c)
{
	t_list	*current;

	current = first_node;
	while (current != NULL)
	{
		printf("%i\n", current->content);
		current = current->next;
	}
	printf("-\n");
	printf("%c\n\n", c);
}

int	main(int argc, char **argv)
{
	t_list *headA;
	t_list *headB = NULL;
	int i;
	i = 2;
	headA = malloc(sizeof(t_list));
	if (argc == 0)
		return (0);
	headA->content = ft_atoi(argv[1]);
	while (i < argc)
	{
		ft_lstadd_back(&headA, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	print_list(headA, 'a');
	print_list(headB, 'b');
	printf("----------------\n");
	sa(&headA);
	pb(&headA, &headB);
	pb(&headA, &headB);
	pb(&headA, &headB);
	pb(&headA, &headB);
	sb(&headB);
	print_list(headA, 'a');
	print_list(headB, 'b');
	printf("----------------\n");
	pa(&headA, &headB);
	print_list(headA, 'a');
	print_list(headB, 'b');
	printf("----------------\n");
	ra(&headA);
	print_list(headA, 'a');
	print_list(headB, 'b');
	rra(&headA);
	print_list(headA, 'a');
	print_list(headB, 'b');
}