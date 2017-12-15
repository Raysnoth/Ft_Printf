/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 12:07:32 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/13 12:07:33 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Permet de lancer le traitement du %s
** Les fonctions sont les meme que le %c
*/

char		*recup_spec_str(t_ptf *var, char *tmp)
{
	char	*str;
	int		*flags;

	flags = var->output->flag;
	if (!tmp)
		str = ft_strdup("(null)");
	else
		str = ft_strdup(tmp);
	if (str)
	{
		if (var->output->precision == 0)
		{
			ft_strdel(&str);
			str = ft_strdup("");
		}
		if (var->output->precision > 0)
			str = spec_char_prec(str, var->output->precision);
		str = spec_char_width(var, str, flags);
	}
	ft_putstr(var->str_tmp);
	ft_putstr(str);
	var->len_return += ft_strlen(var->str_tmp) + ft_strlen(str);
	ft_strdel(&str);
	ft_strdel(&var->str_tmp);
	return (str);
}
