/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:29:31 by alyle             #+#    #+#             */
/*   Updated: 2018/03/31 21:51:46 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		pop_num(void)
{
	int		value;

	g_numptr--;
	value = g_num_arr[g_numptr];
	return (value);
}

char	pop_exp(void)
{
	char	exp;

	g_expptr--;
	exp = g_exp_arr[g_expptr];
	return (exp);
}

int		*push_num(int *g_num_arr, int num)
{
	g_num_arr[g_numptr] = num;
	g_numptr += 1;
	return (g_num_arr);
}

char	*push_exp(char *g_exp_arr, char exp)
{
	g_exp_arr[g_expptr] = exp;
	g_expptr += 1;
	return (g_exp_arr);
}

char	peek_exp(void)
{
	char	exp;

	g_expptr--;
	exp = g_exp_arr[g_expptr];
	g_expptr++;
	return (exp);
}
