/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:34:35 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/30 01:43:10 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_biggest(t_list **lst)
{
	long	max;
	size_t	i;

	i = 0;
	max = is_bigger((*lst), 1);
	while((*lst)->num != max)
	{
		(*lst) = (*lst)->next;
		i++;
	}
	return (i);
}

static void	ft_sort_tree(t_list **lst_a)
{
	t_list	*temp;
	size_t	i;

	if (check_sort(*lst_a) == 0)
		return ;
	temp = (*lst_a);
	i = ft_biggest(lst_a);
	(*lst_a) = temp;
	if (i == 0)
		ft_rotate_a_b(lst_a, 'a');
	else if (i == 1)
	{
		ft_swap_a_b(lst_a, 'a');
		ft_rotate_a_b(lst_a, 'a');
	}
	if (check_sort((*lst_a)) == -1)
		ft_swap_a_b(lst_a, 'a');
	return ;
}

static void	ft_sort_five(t_list **lst_a, t_list **lst_b)
{
	if (check_sort(*lst_a) == 0)
		return ;
	while (ft_lstsize((*lst_a)) != 3)
	{
		if ((*lst_a)->index == 0 || (*lst_a)->index == 4)
			ft_push_a_b(lst_a, lst_b, 'a');
		else
			ft_rotate_a_b(lst_a, 'a');
	}
	ft_sort_tree(lst_a);
	ft_push_a_b(lst_b, lst_a, 'b');
	if ((*lst_a)->index == 4)
		ft_rotate_a_b(lst_a, 'a');
	ft_push_a_b(lst_b, lst_a, 'b');
	if (check_sort((*lst_a)) == -1)
		ft_rotate_a_b(lst_a, 'a');
	return ;
}

static void	ft_radix_sort(t_list **lst_a, t_list **lst_b)
{
	long	i;
	long	controller;

	i = 0;
	if (check_sort(*lst_a) == 0)
		return ;
	while (1)
	{
		controller = ft_lstsize((*lst_a));
		while (controller > 0)
		{
			if ((*lst_a)->index & (1 << i))
				ft_rotate_a_b(lst_a, 'a');
			else
				ft_push_a_b(lst_a, lst_b, 'a');
			controller--;
		}
		while(ft_lstsize((*lst_b)) > 0)
			ft_push_a_b(lst_b, lst_a, 'b');
		if (check_sort((*lst_a)) == 0)
			return ;
		i++;
	}
}

void     what_algorithm(t_list **lst_a, t_list **lst_b)
{
	if (ft_lstsize((*lst_a)) == 1)
		return ;
	if (ft_lstsize((*lst_a)) == 2 && check_sort((*lst_a)) == -1)
	{
		ft_rotate_a_b(lst_a, 'a');
		return ;
	}
	else if ((ft_lstsize((*lst_a)) == 2 && check_sort((*lst_a)) == 0))
		return ;
	if (ft_lstsize((*lst_a)) == 3)
		ft_sort_tree(lst_a);
	else if (ft_lstsize((*lst_a)) == 5)
	{
		ft_index(lst_a);
		ft_sort_five(lst_a, lst_b);
	}
	else
	{
		ft_index(lst_a);
		ft_radix_sort(lst_a, lst_b);
	}
	return ;
}
