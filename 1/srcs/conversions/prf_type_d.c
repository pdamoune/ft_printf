/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 12:27:45 by philippe          #+#    #+#             */
/*   Updated: 2017/04/04 09:26:03 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_d(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[13];
	char	*ptr;
	int 	len;

	ptr = str;
	ft_bzero(str, 13);
	data.d = va_arg(ap, int);
	prf_lltoa_base(str, data.d, 10);
	FLAG &= FOUR_FLAG;
	if (str[0] == '-')
	{
		ptr = &str[1];
		FLAG |= SIGN_M;
	}
	len = ft_strlen(ptr);
	FLAG |= SIGN_FLAG;
	!PRECI ? PRECI = len : 0;
	prf_set_padding((char **)&ptr, arg, len);
	prf_fill_data(arg, (char **)&ptr, len);
}
