/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 19:08:31 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 13:06:50 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		expr_value(char expr)
{
	if (expr == '+' || expr == '-')
		return (1);
	else if (expr == '*' || expr == '/')
		return (2);
	else if (expr == '%')
		return (2);
	else if (expr == '(')
		return (-1);
	return (0);
}

void	do_op(void)
{
	int		val1;
	int		val2;
	char	op;

	val2 = pop_num();
	val1 = pop_num();
	op = pop_exp();
	if (op == '+')
		push_num(g_num_arr, val1 + val2);
	else if (op == '-')
		push_num(g_num_arr, val1 - val2);
	else if (op == '*')
		push_num(g_num_arr, val1 * val2);
	else if (op == '/')
		push_num(g_num_arr, val1 / val2);
	else if (op == '%')
		push_num(g_num_arr, val1 % val2);
}

int		parse_num(char *str, int i)
{
	push_num(g_num_arr, ft_atoi(str, i));
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	return (i);
}

void	parse_equation(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i = parse_num(str, i);
		else if (str[i] == '(')
			push_exp(g_exp_arr, str[i]);
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
				str[i] == '/' || str[i] == '%')
		{
			while (g_expptr > 0 && expr_value(peek_exp()) >= expr_value(str[i]))
				do_op();
			push_exp(g_exp_arr, str[i]);
		}
		else if (str[i] == ')')
		{
			while (peek_exp() != '(')
				do_op();
			pop_exp();
		}
		i++;
	}
}

int		eval_expr(char *str)
{
	int		i;
	int		solution;

	i = 0;
	g_numptr = 0;
	g_expptr = 0;
	g_num_arr = (int*)malloc(sizeof(*g_num_arr) * (ft_strlen(str) / 2 + 1));
	g_exp_arr = (char*)malloc(sizeof(*g_exp_arr) * (ft_strlen(str) / 2 + 2));
	parse_equation(str);
	while (g_expptr > 0)
		do_op();
	solution = g_num_arr[0];
	free(g_num_arr);
	free(g_exp_arr);
	return (solution);
}
