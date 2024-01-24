/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:25 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/24 10:10:59 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	print_both(t_list *a, t_list *b)
// {
// 	int		asize;
// 	int		bsize;
// 	t_list	*tmpa;
// 	t_list	*tmpb;

// 	tmpa = a;
// 	tmpb = b;
// 	asize = ft_lstsize(a);
// 	bsize = ft_lstsize(b);
// 	if (asize > bsize)
// 	{
// 		while (asize > bsize)
// 		{
// 			fprintf(stderr, "%i| \033[1;32m%i\033[0m\n", tmpa->index,
// 				tmpa->content);
// 			asize--;
// 			tmpa = tmpa->next;
// 		}
// 	}
// 	else if (bsize > asize)
// 	{
// 		while (bsize > asize)
// 		{
// 			fprintf(stderr, "\t\t\t\033[1;36m%i\033[0m | %i\n", tmpb->content,
// 				tmpb->index);
// 			tmpb = tmpb->next;
// 			bsize--;
// 		}
// 	}
// 	while (asize && bsize)
// 	{
// 		fprintf(stderr,
// "%i| \033[1;32m%i\033[0m\t\t\t\033[1;36m%i\033[0m |%i\n",
// tmpa->index, tmpa->content, tmpb->content, tmpb->index);
// 		asize--;
// 		bsize--;
// 		tmpb = tmpb->next;
// 		tmpa = tmpa->next;
// 	}
// 	fprintf(stderr, "     -\t\t\t-\n");
// 	fprintf(stderr, "     \033[7;32mA\033[0m\033[7;36m\t\t\tB\033[0m\n\n");
// }

int	main(int argc, char **argv)
{
	t_list	*heada;
	t_list	*headb;

	heada = NULL;
	headb = NULL;
	if (!parse(argc, argv, &heada))
	{
		ft_printf("ERROR\n");
		return (ft_clear(&heada), ft_clear(&headb), 0);
	}
	if (argc == 3)
		sort_2(&heada);
	else if (argc == 4)
		sort_3(&heada);
	else if (argc == 6)
		sort_5(&heada, &headb);
	else
		algo_all(&heada, &headb);
	ft_clear(&heada);
	ft_clear(&headb);
}
