/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:08:54 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/03 14:15:14 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*prev;
	struct s_list	*next;
	long			num;
	size_t			index;
	bool			have_index;
}	t_list;

char	**ft_split(char *str);
bool	ft_valid(t_list *lst, t_list *last_lst, long number);
t_list	*ft_lstnew(int num);
t_list	*ft_last_lst(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	free_lst(t_list **a);
void	ft_free(char **hqts);
void	ft_initialize(t_list **lst, char **arg);
void    ft_swap_a_b(t_list **lst, char chr);
void    ft_push_a_b(t_list **lst1, t_list **lst2, char chr);
void    ft_rotate_a_b(t_list **lst, char chr);
void    ft_re_rotate_a_b(t_list **lst, char chr);
size_t	ft_is_space(size_t i, char *str);
int		check_sort(t_list *lst);
int		ft_lstsize(t_list *lst);
int		ft_error(int num);
int		ft_atoi_error(char *str, size_t i);
long	ft_atoi(char *str);
long	is_bigger(t_list *lst);

#endif
