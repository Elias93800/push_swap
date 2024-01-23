/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:20:20 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/24 00:21:22 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

int	parse_move(char *str, t_list **headA, t_list **headB)
{
	if (ft_strcmp(str, "pa\n") == 0)
		return (pa(headA, headB), 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (pb(headA, headB), 0);
	else if (ft_strcmp(str, "sa\n") == 0)
		return (sa(headA), 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (sb(headB), 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		return (ss(headA, headB), 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		return (ra(headA, 0), 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (rb(headB, 0), 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (rr(headA, headB), 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (rra(headA, 0), 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (rrb(headA, 0), 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (rrr(headA, headB), 0);
    return (1);
}

int	main(int argc, char **argv)
{
	t_list	*heada;
	t_list	*headb;
	char	*str;

	heada = NULL;
	headb = NULL;
	if (argc < 2)
		return (ft_printf("ERROR"));
	if (!parse(argc, argv, &heada))
		return (ft_clear(&heada), ft_clear(&headb), ft_printf("ERROR\n"));
	while (938)
	{
		str = get_next_line(0, 0);
		if (!str)
			break ;
		if (parse_move(str, &heada, &headb))
            break;
        free(str);
	}
	get_next_line(88274, 1);
    if (ft_lstsize(headb) != 0)
        return (ft_clear(&heada), ft_clear(&headb), ft_printf("ERROR 932\n"));
    if (check_sort(&heada))
        return(ft_clear(&heada), ft_clear(&headb), ft_printf("OK\n"));
    else
        return (ft_clear(&heada), ft_clear(&headb), ft_printf("ERROR 92110\n"));
}

