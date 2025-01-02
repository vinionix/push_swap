/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:56:36 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/03 11:56:36 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_error(int num)
{
	if (num == 0)
		write(2, "Error", 5);
	return (2);
}

bool	ft_valid(t_list *lst, t_list *last_lst, long number)
{
	int	i;

	i = 0;
	if (number > 2147483647 || number < -2147483648)
		return (false);
	while (lst)
	{
		if (lst->num == number)
			i++;
		lst = lst->next;
	}
	while (last_lst)
	{
		if (last_lst->num == number)
			i++;
		last_lst = last_lst->prev;
	}
	if (i >= 2)
		return (false);
	return (true);
}
