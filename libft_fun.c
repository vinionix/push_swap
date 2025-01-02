/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:12:26 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/26 15:12:26 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

long	ft_atoi(char *str)
{
	size_t		i;
	size_t		j;
	long			receiver;

	receiver = 0;
	i = 0;
	if ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i = ft_is_space(i, str);
	j = i;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9') 
		return (-2147483649);
	while (str[i] >= '0' && str[i] <= '9')
	{
		receiver = receiver * 10;
		receiver = receiver + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		return (-2147483649);
	if (str[j] == '-')
	{
		receiver *= -1;
		return (receiver);
	} 
	return (receiver);
}

static char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static char	*save_malloc(char **hqts, size_t i, size_t j, char *str)
{
	(*hqts) = (char *)malloc(sizeof(char) * (j + 1));
	if (!*hqts)
		return (NULL);
	ft_strncpy((*hqts), &str[i - j], j);
	(*hqts)[j] = '\0';
	return (*hqts);
}

static char	**save_words(char **hqts, char *str, size_t i)
{
	size_t	j;
	size_t	word_count;

	j = 0;
	word_count = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			if (j > 0)
			{
				if (!save_malloc(&hqts[word_count++], i, j, str))
					return (NULL);
				j = 0;
			}
		}
		else
			j++;
		i++;
	}
	if (j > 0)
		if (!save_malloc(&hqts[word_count++], i, j, str))
			return (NULL);
	hqts[word_count] = NULL;
	return (hqts);
}

char	**ft_split(char *str)
{
	size_t	i;
	size_t	word_count;
	char	**hqts;

	word_count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			if (i > 0 && str[i - 1] != ' ' && !(str[i - 1] >= 9 && str[i
						- 1] <= 13))
				word_count++;
		}
		i++;
	}
	if (i > 0 && str[i - 1] != ' ' && !(str[i - 1] >= 9 && str[i - 1] <= 13))
		word_count++;
	hqts = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!hqts)
		return (NULL);
	hqts[word_count] = NULL;
	return (save_words(hqts, str, 0));
}
