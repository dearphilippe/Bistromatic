/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:18:08 by passef            #+#    #+#             */
/*   Updated: 2018/01/09 20:30:56 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISTROMATIC_H
# define BISTROMATIC_H

# include "./libft/libft.h"
# include <unistd.h>

typedef struct		s_env
{
	unsigned int	len_inp;
	char			*input;
	int				base_inp;
	char			*base_str;
	char			sign[5];
}					t_env;

typedef struct		s_calc
{
	char			sign;
	struct s_calc	*nl;
	struct s_calc	*nr;
	// struct s_calc	*next;
}					t_calc;

typedef struct		s_hand_calc
{
	t_calc			*first;
}					t_hand_calc;

void				parsing(t_env *e, char *line);
void				handle_base(t_env *e);
int					ft_mult(int *n1, int *n2);
int					ft_division(int *n1, int *n2);
int					ft_add(int *n1, int *n2);
int					ft_subs(int *n1, int *n2);
int					ft_mod(int *n1, int *n2);
int					check_brackets(char *s);

#endif
