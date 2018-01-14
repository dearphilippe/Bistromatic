/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:18:08 by passef            #+#    #+#             */
/*   Updated: 2018/01/13 18:37:16 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISTROMATIC_H
# define BISTROMATIC_H

# include "./libft/libft.h"
# include "queue.h"
# include "stack.h"

typedef struct			s_env
{
	unsigned int		len_inp;
	char				*input;
	int					base_inp;
	char				*base_str;
	char				express[6];
	int					status;
	char				*result;
}						t_env;

int						parsing(t_env *e);
void					handle_base(t_env *e);
int						ft_mult(int *n1, int *n2);
int						ft_division(int *n1, int *n2);
int						ft_add(int *n1, int *n2);
int						ft_subs(int *n1, int *n2);
int						ft_mod(int *n1, int *n2);
int						check_brackets(char *s);

int						do_op(int n, char express, int n2);

int						validate_input(t_env *e);

#endif
