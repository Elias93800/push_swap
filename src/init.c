/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:40:46 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/19 00:14:01 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"	

int	parse(int argc, char **argv, t_list **headA)
{
	int		i;
	char	**tab;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		tab = ft_split(argv[i], ' ');
		if (check_args(tab, headA))
			return (0);
		free_tab(tab);
		i++;
	}
	return (1);
}
#include <stdbool.h>
// -500 89 21 56
// 0 3 1 2
// "3 1" 	2 3 
int	check_args(char **tab, t_list **headA)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	while (tab[i])
	{
		tmp = 0;
		j = (tab[i][0] == '-');
		if (!tab[i][j])
			return (92600);
		while (tab[i][j])
		{
			tmp = (tmp * 10 + tab[i][j] - '0');
			if (!ft_isdigit(tab[i][j++]))
				return (92110);
			if ((tmp * ((-(tab[i][0] == '-')) | 1) > 2147483647 || (tmp * (-(tab[i][0] == '-')) | 1) < -2147483648))
				return (93800);
		}
		if (!check_doublon(ft_atoi(tab[i]), headA))
			return (93200);
		ft_lstadd_back(headA, ft_lstnew(ft_atoi(tab[i++])));
	}
	return (0);
}

int	check_doublon(int num, t_list **headA)
{
	t_list *current;

	current = *headA;
	if (!(*headA))
		return (1);
	while (current)
	{
		if (num == (current)->content)
			return (0);
		(current) = (current)->next;
	}
	return (1);
}


// int check_max(char tab, int *tmp)
// {
//     (*tmp) *= 10;
//     (*tmp) += tab - '0';
//     printf(">>>>%li\n", (*tmp));
//     if ((*tmp) > 2147483647 || (*tmp) < -2147483648)
//         return (5);

// }

// argv[1] = 1
// argv[2] = 0
// argv[3] = " 35 4 -5 j !"
// argv[4] = 9

// ""1""0""35""

// argc = 5;
// i = 1;
// while (i < argc)
//     char **tab = ft_split(argv[i]);
//     while (tab[j])
//         if (is_digit(tab[j]))
//         num = ft_atoi(tab[j]);
//     free tab
