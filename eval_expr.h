/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:54:38 by alyle             #+#    #+#             */
/*   Updated: 2018/03/31 22:04:01 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

int		g_numptr;
int		g_expptr;
int		*g_num_arr;
char	*g_exp_arr;

int		pop_num(void);
char	pop_exp(void);
int		*push_num(int *g_num_arr, int num);
char	*push_exp(char *g_exp_arr, char exp);
char	peek_exp(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_isspace(char c);
int		ft_atoi(char *str, int ptr);
int		ft_strlen(char *str);
int		eval_expr(char *str);
int		expr_value(char expr);

#endif
