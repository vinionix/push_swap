/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:20 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/03 13:54:20 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize(t_list **lst, char **arg)
{
	size_t	i;
	long		num;
	t_list	*temp;

	num = 0;
	temp = NULL;
	i = 0;
	while (arg[i])
	{
		num = ft_atoi(arg[i]);
		if (!ft_valid(*lst, ft_last_lst(*lst), num))
		{
			ft_error(0);
			return ;
		}
		else
			ft_lstadd_back(lst, ft_lstnew((int)num));
		i++;
	}
}
