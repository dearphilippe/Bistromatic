/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:18:08 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 21:06:31 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BISTROMATIC_H_
#define _BISTROMATIC_H_

#include "./libft/libft.h"

typedef struct s_env
{
	unsigned int len_op;
	char *op;
	int base;
	char *base_str;
	char sign[5];
}t_env;

typedef struct s_calc
{
	int n;
	struct s_calc *next;
}				t_calc;

typedef struct s_hand_calc
{
	t_calc *first;
}				t_hand_calc;

void		parsing(t_env *e, char *line);
void		handle_base(t_env *e);
int			ft_mult(int *n1, int *n2);
int			ft_division(int *n1, int *n2);
int			ft_add(int *n1, int *n2);
int			ft_subs(int *n1, int *n2);
int			ft_mod(int *n1, int *n2);

#endif