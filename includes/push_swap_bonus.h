/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:02:29 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/23 23:42:39 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"

void	sa(t_list **head);
void	sb(t_list **head);
void	pb(t_list **headA, t_list **headB);
void	pa(t_list **headA, t_list **headB);
void	ra(t_list **headA, int stop);
void	rb(t_list **headB, int stop);
void	rr(t_list **headA, t_list **headB);
void	rra(t_list **headA, int stop);
void	rrb(t_list **headB, int stop);
void	rrr(t_list **headA, t_list **headB);
int		parse(int argc, char **argv, t_list **headA);
int		check_args(char **tab, t_list **headA);
int		check_doublon(int num, t_list **headA);
void	ft_index(t_list **head);
void	print_both(t_list *a, t_list *b);
int		check_sort(t_list **headA);
void	ss(t_list **headA, t_list **headB);
void	ft_clear(t_list **lst);

#endif