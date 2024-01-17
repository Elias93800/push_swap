/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:03:32 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/18 00:34:37 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	sa(t_list **head);
void	sb(t_list **head);
void	pb(t_list **headA, t_list **headB);
void	pa(t_list **headA, t_list **headB);
void	ra(t_list **headA);
void	rb(t_list **headB);
void	rr(t_list **headA, t_list **headB);
void	rra(t_list **headA);
void	rrb(t_list **headB);
void	rrr(t_list **headA, t_list **headB);
int		parse(int argc, char **argv, t_list **headA);
int		check_args(char **tab, t_list **headA);
int		check_doublon(int num, t_list **headA);
int		check_sort(t_list **headA);
void	ft_index(t_list **head);
t_list	*ft_min(t_list **head);
t_list	*ft_max(t_list **head);
t_list		*daron(int gamin, t_list **headA);
int		sort_3(t_list **headA);
int price(int index, int size);
int abs(int nb);

#endif