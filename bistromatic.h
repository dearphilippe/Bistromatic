/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:18:08 by passef            #+#    #+#             */
/*   Updated: 2018/01/09 06:59:29 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISTROMATIC_H
# define BISTROMATIC_H

# define B10 0123456789
# define B9 012345678
# define B8 01234567
# define B7 0123456
# define B6 012345
# define B5 01234
# define B4 0123
# define B3 012
# define B2 01
# define B1 0

# include "./libft/libft.h"

typedef struct		s_env
{
	unsigned int	len_op;
	char			*op;
	int				base;
	char			*base_str;
	char			sign[5];
}					t_env;

typedef struct		s_calc
{
	int				n;
	struct s_calc	*next;
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

#endif
