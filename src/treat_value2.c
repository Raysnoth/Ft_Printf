/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_value2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:17:59 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 14:18:00 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Derniere fonction de recuperation des arguments
** et de lancement de traitement
*/

int		recup_spec_end(t_ptf *var, char *res, char spec, char *lenght)
{
	if (spec == 'U')
		res = recup_spec_uint(var, ft_uintmaxtoa(va_arg(var->args, \
														unsigned long long)));
	if (spec == 's' || spec == 'S')
	{
		if (spec == 's' && (!lenght || ft_strcmp(lenght, "l") != 0))
			res = recup_spec_str(var, va_arg(var->args, char *));
		if (spec == 'S' || (spec == 's' && lenght && \
							ft_strcmp(lenght, "l") == 0))
			return (recup_spec_lstr(var, 0));
	}
	else if (spec == 'C' || (spec == 'c' && lenght && !ft_strcmp(lenght, "l")))
		return (recup_spec_lchar(var, NULL));
	else if (spec == 'c' && (!lenght || ft_strcmp(lenght, "l") == 1))
		recup_spec_char(var, spec, va_arg(var->args, int));
	else if (res)
	{
		ft_putstr(var->str_tmp);
		ft_putstr(res);
		var->len_return += ft_strlen(var->str_tmp) + ft_strlen(res);
		ft_strdel(&res);
	}
	ft_strdel(&var->str_tmp);
	return (0);
}
