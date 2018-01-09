/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:18:08 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 19:19:48 by passef           ###   ########.fr       */
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
	char sign[5];
}t_env;

void		parsing(t_env *e, char *line);
void		handle_base(t_env *e);
int			ft_mult(int *n1, int *n2);
int			ft_division(int *n1, int *n2);
int			ft_add(int *n1, int *n2);
int			ft_subs(int *n1, int *n2);
int			ft_mod(int *n1, int *n2);

#endif