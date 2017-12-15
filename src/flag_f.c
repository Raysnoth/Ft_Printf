/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 15:16:56 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/16 15:16:57 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Si la chaine est plus petite que la largeur
** ajoute des '0' en debut de chaine
** Puis deplace le signe
*/

static char	*spec_float_width_3(int len, char *res, char *str, int i)
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

/*
** Si flags '0' absent
** Si flags '-' present ajoute des ' ' derriere la chaine
** Si flags '-' absent ajoute des ' ' devant la chaine
*/

static char	*spec_flo_width_2(char *str, int *flags, int len, char *res)
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
** Si flags '0' present, appelle la fonction spec_float_width3
** - Si un espace est present, il est deplacer en debut de chaine
** Sinon appelle spec_float_width2
*/

char		*spec_float_width(t_ptf *var, char *str, int *flags, int i)
{
	char	*res;
	int		len;

	len = ft_strlen(str);
	if (var->output->width > len && (res = ft_strnew(var->output->width - len)))
	{
		if (flags[1])
		{
			res = spec_float_width_3((var->output->width - len), res, str, -1);
			if (str[0] == ' ')
			{
				i = 0;
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
			str = spec_flo_width_2(str, flags, (var->output->width - len), res);
	}
	return (str);
}

/*
** Permet de gerer les flags '+' et ' '
*/

char		*spec_float_flags(char *str, int *flags)
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
** flag # force l'affichage de la virgule pour une precision de 0
*/

char		*recup_spec_float(t_ptf *var, char *str)
{
	int		prec;
	int		*flags;
	char	*res;

	res = NULL;
	prec = ((var->output->precision == -1) ? (6) : (var->output->precision));
	flags = var->output->flag;
	if (str)
	{
		res = ft_strdup(str);
		ft_strdel(&str);
		if (flags[0] && prec == 0)
			res = ft_concat(res, ".");
		res = spec_float_flags(res, flags);
		res = spec_float_width(var, res, flags, -1);
	}
	return (res);
}
