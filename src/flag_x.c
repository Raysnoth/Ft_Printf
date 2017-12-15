/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 15:05:13 by gauffret          #+#    #+#             */
/*   Updated: 2017/12/14 10:50:52 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Si la precision est plus grande que la taille de la chaine
** Ajoute des '0' devant la chaine
*/

static char	*spec_hex_precision(char *str, int precision, int i)
{
	int		len;
	char	*res;

	res = NULL;
	len = ft_strlen(str);
	if (str[0] == '-')
		len--;
	if (precision > len)
	{
		res = ft_strnew(precision - len);
		while (++i < precision - len)
			res[i] = '0';
		res = ft_concat(res, str);
		i = 0;
		if (str[0] == '-')
			while (res[i] && res[i] != '-')
				i++;
		if (str[0] == '-')
			if (res[i] == '-' && (res[i] = '0'))
				res[0] = '-';
		ft_strdel(&str);
		str = res;
	}
	return (str);
}

/*
** Si la largeur est plus grande que la taille de la chaine
** Ajoute des espaces devant la chaine si le flags '-' est present
** Ajoute des espaces deriere la chaine si le flags '-' est pas present
*/

static char	*spec_hex_width_2(char *str, int *flags, int len, char *res)
{
	int		i;

	i = -1;
	while (++i < len)
		res[i] = ' ';
	if (flags[2])
	{
		str = ft_concat(str, res);
		ft_strdel(&res);
	}
	else
	{
		res = ft_concat(res, str);
		ft_strdel(&str);
		str = res;
	}
	return (str);
}

/*
** Si la largeur est plus grande que la taille de la chaine
** Si le flags '0' est present, ajoute des '0' devant la chaine
*/

static char	*spec_hex_width(t_ptf *var, char *str, int *flags, int nb_null)
{
	int		width;
	char	*res;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(str);
	width = ((flags[0] && !nb_null) ? (var->output->width - 2) : (var->output->width));
	if (width > len)
	{
		res = ft_strnew(width - len);
		if (flags[1] && (var->output->precision < 0 || (var->output->precision \
										> -1 && var->output->precision > len)))
		{
			while (++i < (width - len))
				res[i] = '0';
			res = ft_concat(res, str);
			ft_strdel(&str);
			str = res;
		}
		else
			str = spec_hex_width_2(str, flags, (width - len), res);
	}
	return (str);
}

/*
** Ajoute "0x" devant le nombre hexadecimal si le flags '#' est donne
*/

static char	*spec_hex_prefix(char *str, int *flags, int nb_null)
{
	char	*pre;
	int		i;

	i = 0;
	if (flags[0] && str && !nb_null)
	{
		pre = ft_strnew(ft_strlen(str) + 2);
		while (str && str[i] && str[i] == ' ')
		{
			pre[i] = str[i];
			i++;
		}
		pre[i] = '0';
		pre[i + 1] = 'x';
		while (str && str[i])
		{
			pre[i + 2] = str[i];
			i++;
		}
		ft_strdel(&str);
		str = pre;
	}
	return (str);
}

/*
** Fonction qui permet de gerer le %x
*/

char		*recup_spec_hex(t_ptf *var, char spec, char *str)
{
	int				*flags;
	int				precision;
	int				nb_null;

	nb_null = 0;
	if (str && ft_strlen(str) == 1 && str[0] == '0')
		nb_null = 1;
	flags = var->output->flag;
	precision = ((var->output->precision < 0) ? (0) : (var->output->precision));
	if (str)
	{
		if (precision != 0)
			str = spec_hex_precision(str, precision, -1);
		if (var->output->precision == 0 && nb_null)
		{
			ft_strdel(&str);
			str = ft_strdup("");
		}
		str = spec_hex_width(var, str, flags, nb_null);
	}
	str = spec_hex_prefix(str, flags, nb_null);
	str = ft_strtolower(str);
	if (spec == 'X')
		str = ft_strtoupper(str);
	return (str);
}
