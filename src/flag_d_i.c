/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_d_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 15:16:40 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/10 15:16:41 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** flag[0] = '#'
** flag[1] = '0'
** flag[2] = '-'
** flag[3] = ' '
** flag[4] = '+'
*/

/*
** Fonction qui permet de remplacer les '0' en trop (mis a cause de la
** largeur et du flags '0') par des espaces et donc de garder
** le bon nombre de chiffres dans le resultat
*/

static char	*spec_int_precision_3(char *str, int len, int precision, int i)
{
	char	*res;

	res = ft_strdup(str);
	ft_strdel(&str);
	while (res && res[++i])
		if (ft_isdigit(res[i]))
			len++;
	i = -1;
	if (len > precision)
		while (res && res[++i] && (len > precision))
		{
			while (res && res[i] && res[i] == ' ')
				i++;
			if (res && res[i] && res[i] == '-')
				i++;
			if (res[i] == '0')
			{
				res[i] = ' ';
				len--;
				i = -1;
			}
			if (res && res[i] && res[i] != '0' && res[i] != '-')
				break ;
		}
	return (res);
}

/*
** spec_int_precision && spec_int_precision_2 permettent de gerer la
** precision.
** La precision ajoute des '0' au debut du nombre (apres le - et le +)
*/

static char	*spec_int_precision_2(char *str, char *res, int len, int i)
{
	while (++i < len)
		res[i] = '0';
	res = ft_concat(res, str);
	i = 0;
	if (str[0] == '-')
		while (res[i] && res[i] != '-')
			i++;
	if (str[0] == '-')
		if (res[i] == '-' && (res[i] = '0'))
			res[0] = '-';
	if (str[0] == '+')
		while (res[i] && res[i] != '+')
			i++;
	if (str[0] == '+')
		if (res[i] == '+' && (res[i] = '0'))
			res[0] = '+';
	ft_strdel(&str);
	return (res);
}

static char	*spec_int_precision(char *str, int precision, int i)
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
		str = spec_int_precision_2(str, res, precision - len, i);
	}
	return (str);
}

/*
** Permet de gerer les flags '+' et ' '
*/

static char	*spec_int_flags(char *str, int *flags)
{
	char	*res;

	if (flags && flags[3] && str[0] != '-')
	{
		res = ft_strdup(str);
		ft_strdel(&str);
		str = ft_strdup(" ");
		str = ft_concat(str, res);
		ft_strdel(&res);
	}
	if (flags && flags[4] && str[0] != '-')
	{
		res = ft_strdup(str);
		ft_strdel(&str);
		str = ft_strdup("+");
		str = ft_concat(str, res);
		ft_strdel(&res);
	}
	return (str);
}

/*
** Fonction qui debute le traitement pour les entier
*/

char		*recup_spec_int(t_ptf *var, char *str, int nb_null)
{
	int		*flags;
	int		precision;

	if (str && ft_strlen(str) == 1 && str[0] == '0')
		nb_null = 1;
	flags = var->output->flag;
	precision = ((var->output->precision < 0) ? (0) : (var->output->precision));
	if (str)
	{
		if (var->output->precision == 0 && nb_null)
		{
			ft_strdel(&str);
			str = ft_strdup("");
		}
		if (precision != 0)
			str = spec_int_precision(str, precision, -1);
		str = spec_int_flags(str, flags);
		str = spec_int_width(var, str, flags, 0);
		str = spec_int_zero(var, str, flags, precision);
		if (precision != 0)
			str = spec_int_precision_3(str, 0, precision, -1);
	}
	return (str);
}
