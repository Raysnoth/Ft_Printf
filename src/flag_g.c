/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_g.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 16:21:05 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/22 16:21:11 by gauffret         ###   ########.fr       */
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
** Permet d'ajouter ' ' ou '+' si necessaire
*/

char		*spec_betdot_flags(char *res, int *flags)
{
	char *str;

	if (flags[3] && res[0] != '-')
	{
		str = ft_concat(ft_strdup(" "), res);
		ft_strdel(&res);
		res = str;
	}
	if (flags[4] && res[0] != '-')
	{
		str = ft_concat(ft_strdup("+"), res);
		ft_strdel(&res);
		res = str;
	}
	return (res);
}

/*
** Permet de calculer la precision en fonction du nombre de chiffre
** avant la virgule
*/

int			spec_betdot_reduce_prec(char *res, int precision)
{
	int		i;

	i = 0;
	while (res && res[i] && (res[i] == '0' || res[i] == ' ' || res[i] == '-' \
										|| res[i] == '+') && res[i] != '.')
		i++;
	while (res && res[i] && res[i] != '.')
	{
		if (ft_isdigit(res[i]))
			precision--;
		i++;
	}
	return (precision);
}

/*
** Permet de modifier la chaine pour mieux correpondre au nombre a
** virgule attendu
*/

char		*spec_betdot_float(t_ptf *var, char *str, char *res, int precision)
{
	ft_strdel(&res);
	precision = spec_betdot_reduce_prec(str, precision);
	str = spec_betdot_prec(str, precision, 0);
	if (!var->output->flag[0])
		str = spec_betdot_removedot(str);
	if (!var->output->flag[0])
		str = spec_betdot_delzero(str);
	str = spec_betdot_flags(str, var->output->flag);
	str = spec_betdot_width(var, str, ft_strlen(str), -1);
	return (str);
}

/*
** Permet de modifier la chaine pour mieux correspondre a
** l'ecriture scienifique attendu
*/

char		*spec_betdot_scien(t_ptf *var, char *res, int prec)
{
	char	*puiss;
	int		i;

	i = 0;
	while (res && res[i] && res[i + 1])
		i++;
	while (res && res[i] && (ft_isdigit(res[i]) || res[i] == ' '))
		i--;
	if (res && res[i - 1] && res[i - 1] == 'e')
		i--;
	puiss = ft_strdup(res + i);
	while (res && res[i])
	{
		res[i] = '\0';
		i++;
	}
	prec = spec_betdot_reduce_prec(res, prec);
	res = spec_betdot_prec(res, prec, 0);
	if (!var->output->flag[0])
		res = spec_betdot_delzero(res);
	res = ft_concat(res, puiss);
	ft_strdel(&puiss);
	if ((int)ft_strlen(res) != var->output->width)
		res = spec_betdot_width(var, res, ft_strlen(res), -1);
	return (res);
}

/*
** Permet de gerer le %g
** Si l'ecriture scientifique a une puissance superieur ou egal a -5 et
** si la puissance esst inferieur a la precision alors le traitement
** ressemble a %f
** Sinon ressemble a %e
*/

char		*recup_spec_betdot(t_ptf *var, char *str, double nb, int i)
{
	char	*res;
	int		pui;
	int		precision;
	char	*str_tmp;

	str = recup_nb_e_g(nb, var, NULL);
	precision = ((var->output->precision < 0) ? (6) : (var->output->precision));
	precision = ((precision == 0) ? (1) : (precision));
	str_tmp = ft_strdup(str);
	res = recup_spec_scien(var, 'e', str);
	while (res && res[i] && res[i + 1])
		i++;
	while (res && res[i] && (ft_isdigit(res[i]) || res[i] == ' '))
		i--;
	pui = ft_atoi(res + i);
	if (pui >= -4 && pui < precision)
		res = spec_betdot_float(var, str_tmp, res, precision);
	else
	{
		ft_strdel(&str_tmp);
		res = spec_betdot_scien(var, res, precision);
	}
	if (var->output->specifier[0] == 'G')
		res = ft_strtoupper(res);
	return (res);
}
