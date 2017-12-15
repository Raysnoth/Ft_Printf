/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 15:43:54 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/23 15:43:56 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonction qui gere la precision
** Si la taille de la string de depart est plus petite que la precision
** 		la difference est remplie avec des '0'
*/

char		*spec_bin_precision(char *str, int precision, int i)
{
	int		len;
	char	*res;

	res = NULL;
	len = ft_strlen(str);
	if (precision > len)
	{
		res = ft_strnew(precision - len);
		while (++i < precision - len)
			res[i] = '0';
		res = ft_concat(res, str);
		i = 0;
		ft_strdel(&str);
		str = res;
	}
	return (str);
}

/*
** Fonction ajoute un espace en debut de chaine si le flgs ' ' est present
*/

char		*spec_bin_flags(char *str, int *flags)
{
	char	*res;

	if (flags && flags[3])
	{
		res = ft_strdup(str);
		ft_strdel(&str);
		str = ft_strdup(" ");
		str = ft_concat(str, res);
		ft_strdel(&res);
	}
	return (str);
}

/*
** Fonction de depart du traitement pour un affichage en binaire
*/

char		*recup_spec_bin(t_ptf *var, char *str)
{
	int				*flags;
	int				precision;
	int				nb_null;

	nb_null = 0;
	if (str && ft_strlen(str) == 1 && str[0] == '0')
		nb_null = 1;
	flags = var->output->flag;
	precision = ((var->output->precision < 0) ? (0) : (var->output->precision));
	if (precision != 0)
		str = spec_bin_precision(str, precision, -1);
	if (var->output->precision == 0 && nb_null)
	{
		ft_strdel(&str);
		str = ft_strdup("");
	}
	str = spec_bin_flags(str, flags);
	str = spec_bin_width(var, str, flags);
	return (str);
}
