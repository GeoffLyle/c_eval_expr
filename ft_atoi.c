/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:05:42 by alyle             #+#    #+#             */
/*   Updated: 2018/04/04 15:09:25 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str, int ptr)
{
	int		i;
	int		sign;
	int		value;

	i = ptr;
	sign = 1;
	value = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		value = (value * 10 + (str[i] - '0'));
		i++;
	}
	return (value * sign);
}
