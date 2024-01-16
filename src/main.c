/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:25 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/16 00:01:21 by emehdaou         ###   ########.fr       */
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
	t_list *headA = NULL;
	// t_list *headB = NULL;
	
	if (argc == 0)
		return (0);
	if (!parse(argc, argv, &headA))
	{
		printf("ERROR");
		return(0);
	}
	// print_list(headA, 'a');
	// print_list(headB, 'b');
	// printf("----------------\n");
	// sa(&headA);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// pb(&headA, &headB);
	// print_list(headA, 'a');
	// print_list(headB, 'b');
	// sb(&headB);
	// print_list(headA, 'a');
	// print_list(headB, 'b');
	// printf("----------------\n");
	// pa(&headA, &headB);
	// print_list(headA, 'a');
	// print_list(headB, 'b');
	// printf("----------------\n");
	// ra(&headA);
	// print_list(headA, 'a');
	// print_list(headB, 'b');
	// rra(&headA);
	// rr(&headA, &headB);
	// rrr(&headA, &headB);
	// print_list(headA, 'a');
	// print_list(headB, 'b');
}