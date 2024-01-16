/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:03:32 by emehdaou          #+#    #+#             */
/*   Updated: 2024/01/15 23:02:17 by emehdaou         ###   ########.fr       */
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
int parse(int argc, char **argv, t_list **headA);
int check_args(char **tab, t_list **headA);
    

#endif