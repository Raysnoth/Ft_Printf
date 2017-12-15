/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 14:41:23 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/22 14:41:24 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Permet d'ajouter la puissance a la fin de la chaine
*/

static char	*add_pui(char *str, int pui)
{
	char	*puissance;

	if (pui < 0)
		str = ft_concat(str, "e-");
	else
		str = ft_concat(str, "e+");
	pui = ft_abs(pui);
	puissance = ft_itoa(pui);
	if (ft_strlen(puissance) == 1)
	{
		str = ft_concat(str, "0");
		str = ft_concat(str, puissance);
	}
	else
		str = ft_concat(str, puissance);
	ft_strdel(&puissance);
	return (str);
}

/*
** Calcul la puissance pour l'ecriture scientifique
*/

static int	calc_pui(char *str)
{
	int		pui;
	int		i;
	int		j;

	i = 0;
	pui = 0;
	j = ft_strchri(str, '.');
	if (str[0] == '-')
		i++;
	while (str && str[i] && (str[i] == '0' || str[i] == '.'))
		i++;
	if (str[i] == '\0')
		i = j;
	if (j < i)
		pui = j - i;
	if (i < j)
		pui = j - i - 1;
	return (pui);
}

/*
** Les deux fonctions suivante permettent de covertir le nombre en nombre
** scientifique
*/

static char	*conv_scien_2(int len, int j, char *res, char *str)
{
	int		i;

	i = 0;
	(void)len;
	while (str && str[i] && (str[i] == '0' || str[i] == '.'))
		i++;
	while (str && res && res[j] && str[i])
	{
		if (res[j] == '.')
		{
			j++;
			continue ;
		}
		if (str[i] != '.')
		{
			if (!res[j + 1] && str[i + 1])
				if (str[i + 1] >= '5')
					str[i]++;
			res[j++] = str[i];
		}
		i++;
	}
	res = add_pui(res, calc_pui(str));
	return (res);
}

static char	*conv_scien(char *str, int precision, int *flags, int i)
{
	char	*res;
	int		j;
	int		len;

	len = precision + ((precision || (precision == 0 && flags[0])) ? \
						(2) : (1)) + ((str[0] == '-') ? (1) : (0));
	res = ft_strnew(len);
	while (++i < len)
		res[i] = '0';
	i = 0;
	j = 0;
	if (str[i] && str[i] == '-')
	{
		res[j++] = '-';
		i++;
	}
	if (precision == 0 && flags[0])
		res[j + 1] = '.';
	if (precision)
		res[j + 1] = '.';
	res = conv_scien_2(((str[0] == '-') ? (len - 1) : (len)), j, res, str + i);
	ft_strdel(&str);
	return (res);
}

/*
** Permet de lancer le traitement pour le %e
*/

char		*recup_spec_scien(t_ptf *var, char spec, char *str)
{
	int		*flags;
	int		precision;
	int		i;

	i = 0;
	flags = var->output->flag;
	precision = ((var->output->precision < 0) ? (6) : (var->output->precision));
	while (str && str[i] && i != precision)
		i++;
	str = conv_scien(str, precision, flags, -1);
	if (str)
	{
		str = spec_float_flags(str, flags);
		str = spec_float_width(var, str, flags, -1);
	}
	if (spec == 'E')
		str = ft_strtoupper(str);
	return (str);
}
