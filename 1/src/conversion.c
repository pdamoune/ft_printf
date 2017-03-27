/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:27:42 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 19:14:45 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_fonct		g_conv[] =
{
	{'c', &ft_type_c},
	{'s', &ft_type_s},
	// {'S', &ft_type_us},
	{'d', &ft_type_d},
	{'i', &ft_type_d},
	{'p', &ft_type_p},
	{'o', &ft_type_o},
	{'u', &ft_type_u},
	{'x', &ft_type_x},
	{'X', &ft_type_ux},
	// {'f', &ft_type_f},
	// {'F', &ft_type_uf},
	// {'e', &ft_type_e},
	// {'E', &ft_type_ue},
	// {'g', &ft_type_g},
	// {'G', &ft_type_ug},
	// {'a', &ft_type_a},
	// {'A', &ft_type_ua},
};

int		prf_conversion(t_form *form, t_arg *arg, va_list ap)
{
	char *tmp;
	// int old_len;
	int	i;

	i = 0;
	// ft_putendl("======= CONVERSION ========");
	while (arg->type != g_conv[i].id)
	 	i++;
	tmp = (g_conv[i].fonction)(arg, ap, &(form->len_buffer));
	// DEB
	// BUF
	// RES
	// ft_putendl(tmp);
	// LB
	// LR
	// DEB
	ft_putendl(tmp);
	prf_join_buffer(form->result, tmp, &(form->len_result), &(form->len_buffer));
	ft_strdel(&tmp);
	// old_len = form->r_len;
	// form->r_len += ft_strlen(str);
	// form->result = ft_memrealloc(form->result, old_len, form->r_len + 1);
	// ft_strcpy(&form->result[old_len], str);
	// ft_putendl("======= CONVERSION ========");
	return (0);
}
