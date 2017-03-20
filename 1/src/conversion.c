/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:27:42 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 12:07:01 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		conversion(t_form *form, va_list ap)
{
	int	i;

	i = 0;
	DEB
	while (form->type != g_conv[i].id)
		i++;
	ft_putnbrel(i);
	(g_conv[i].fonction)(form, ap);
	DEB
	// while (form->type !=)
	// ft_type_p(form, ap);
	return (0);
}
