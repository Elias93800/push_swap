/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:25 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/19 20:19:02 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_both(t_list *a, t_list *b)
{
	int	asize;
	int	bsize;
	t_list *tmpa = a;
	t_list *tmpb = b;

	asize = ft_lstsize(a);
	bsize = ft_lstsize(b);
	if (asize > bsize)
	{
		while (asize > bsize)
		{
			fprintf(stderr,"%i| \033[1;32m%i\033[0m\n", tmpa->index, tmpa->content);
			asize--;
			tmpa = tmpa->next;
		}
	}
	else if (bsize > asize)
	{
		while (bsize > asize)
		{
			fprintf(stderr,"\t\t\t\033[1;36m%i\033[0m | %i\n", tmpb->content, tmpb->index);
			tmpb = tmpb->next;
			bsize--;
		}
	}
	while (asize && bsize)
	{
		fprintf(stderr,"%i| \033[1;32m%i\033[0m\t\t\t\033[1;36m%i\033[0m | %i\n",
			tmpa->index, tmpa->content, tmpb->content, tmpb->index);
		asize--;
		bsize--;
		tmpb = tmpb->next;
		tmpa = tmpa->next;
	}
	fprintf(stderr,"     -\t\t\t-\n");
	fprintf(stderr,"     \033[7;32mA\033[0m\033[7;36m\t\t\tB\033[0m\n\n");
}

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


int	main(int argc, char **argv)
{
	t_list *headA = NULL;
	t_list *headB = NULL;
	if (!parse(argc, argv, &headA))
	{
		printf("ERROR\n");
		ft_clear(&headA);
		return (0);
	}
	algo_all(&headA, &headB);
	ft_clear(&headA);
	ft_clear(&headB);

}