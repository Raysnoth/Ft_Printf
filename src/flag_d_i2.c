/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_d_i2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:49:26 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/28 11:49:29 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonctions permettant de gerer la largeur :
** Si flags '0' est present ajoute des '0' sinon des ' '
** Si flags '-' ajoute a la fin de la chaine sinon au debut
*/

static char	*spec_int_width_3(char *str, int len, char *res, int i)
{
	while (++i < len)
		res[i] = '0';
	res = ft_concat(res, str);
	if (str[0] == '-')
	{
		i = 0;
		while (res[i] && res[i] != '-')
			i++;
		if (res[i] == '-')
			res[i] = '0';
		res[0] = '-';
	}
	if (str[0] == '+')
	{
		i = 0;
		while (res[i] && res[i] != '+')
			i++;
		if (res[i] == '+')
			res[i] = '0';
		res[0] = '+';
	}
	return (res);
}

static char	*spec_int_width_2(char *str, int *flags, int len, char *res)
{
	int		i;

	i = -1;
	while (++i < len)
		res[i] = ' ';
	if (flags[2] && res)
		str = ft_concat(str, res);
	if (flags[2] && res)
		ft_strdel(&res);
	if (!flags[2])
	{
		res = ft_concat(res, str);
		ft_strdel(&str);
		str = res;
	}
	return (str);
}

char		*spec_int_width(t_ptf *var, char *str, int *flags, int i)
{
	char	*res;
	int		len;

	len = ft_strlen(str);
	if (var->output->width > len && (res = ft_strnew(var->output->width - len)))
	{
		if (flags[1] && (var->output->precision < 0 || (var->output->precision \
									> -1 && var->output->precision > len)))
		{
			res = spec_int_width_3(str, (var->output->width - len), res, -1);
			if (str[0] == ' ')
			{
				while (res[i] && res[i] != ' ')
					i++;
				if (res[i] == ' ')
					res[i] = '0';
				res[0] = ' ';
			}
			ft_strdel(&str);
			str = res;
		}
		else
			str = spec_int_width_2(str, flags, (var->output->width - len), res);
	}
	return (str);
}

char		*spec_int_zero(t_ptf *var, char *str, int *flags, int precision)
{
	int		i;

	i = 0;
	if (flags[1] && precision != 0 && (precision < var->output->width))
		while (str && str[i] && i < (var->output->width - precision))
		{
			if (str[i] && str[i + 1] && str[i] == '0' && str[i + 1] == '0')
				str[i] = ' ';
			if (str[i] != '0')
				break ;
			i++;
		}
	return (str);
}
