/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:36:59 by philippe          #+#    #+#             */
/*   Updated: 2017/04/05 17:56:35 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_type_c(t_arg *arg, va_list ap)
{
	t_data	data;
	char 	*s;
	int 	len;

	s = (char *)data.c;
	len = 1;
	data.c[0] = va_arg(ap, int);
	data.c[1] = 0;
	if (WIDTH <= len)
	{
		prf_fill_data(arg, &s, len);
		return ;
	}
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	FLAG_M && !data.c[0] ? J++ : 0;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s, len);
	!FLAG_M && !data.c[0] ? J++ : 0;
}
