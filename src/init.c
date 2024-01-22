/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:40:46 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/22 06:36:13 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	only_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	parse(int argc, char **argv, t_list **headA)
{
	int		i;
	char	**tab;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		if (!argv[i][0])
			return (0);
		if (only_space(argv[i]))
			return (0);
		tab = ft_split(argv[i], ' ');
		if (check_args(tab, headA))
			return (0);
		i++;
	}
	return (1);
}

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
			return (free_tab(tab), 92600);
		while (tab[i][j])
		{
			tmp = (tmp * 10 + tab[i][j] - '0');
			if (!ft_isdigit(tab[i][j++]))
				return (free_tab(tab), 92110);
			if ((tmp * ((-(tab[i][0] == '-')) | 1) > 2147483647 || (tmp
					* (-(tab[i][0] == '-')) | 1) < -2147483648))
				return (free_tab(tab), 93800);
		}
		if (!check_doublon(ft_atoi(tab[i]), headA))
			return (free_tab(tab), 1);
		ft_lstadd_back(headA, ft_lstnew(ft_atoi(tab[i++])));
	}
	return (free_tab(tab), 0);
}

int	check_doublon(int num, t_list **headA)
{
	t_list	*current;

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
