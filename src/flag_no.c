/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_no.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 15:36:54 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/24 15:36:55 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Tronque la chaine si la chaine est plus grande que la chaine
*/

char		*spec_no_prec(char *str, int precision)
{
	char	*res;

	res = ft_strsub(str, 0, precision);
	ft_strdel(&str);
	str = res;
	return (str);
}

/*
** Si la largeur est plus grande que la taille de la chaine
** Ajoute des espaces devant la chaine si le flags '-' est present
** Ajoute des espaces deriere la chaine si le flags '-' est pas present
*/

static char	*spec_no_width_2(char *str, int *flags, int len, char *res)
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

char		*spec_no_width(t_ptf *var, char *str, int *flags)
{
	int		width;
	char	*res;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(str);
	width = var->output->width;
	if (width > len)
	{
		res = ft_strnew(width - len);
		if (flags[1])
		{
			while (++i < (width - len))
				res[i] = '0';
			res = ft_concat(res, str);
			ft_strdel(&str);
			str = res;
		}
		else
			str = spec_no_width_2(str, flags, width - len, res);
	}
	return (str);
}

/*
** Initialise la structure de stockage des donner pour le traitement
*/

int			init_output_no(t_ptf *var)
{
	var->output = (t_out *)malloc(sizeof(t_out));
	var->output->all = NULL;
	var->output->flag = (int *)malloc(sizeof(int) * 5);
	if (!var->output->flag)
		return (0);
	var->output->flag[0] = 0;
	var->output->flag[1] = 0;
	var->output->flag[2] = 0;
	var->output->flag[3] = 0;
	var->output->flag[4] = 0;
	var->output->width = 0;
	var->output->precision = -1;
	var->output->lenght = NULL;
	var->output->specifier = NULL;
	var->output->res = NULL;
	return (1);
}

/*
** Permet de gerer le cas ou aucun specifier n'est donner apres le '%'
*/

void		treat_no_spec_found(t_ptf *var)
{
	char	*str;
	int		*flags;

	str = NULL;
	if (!init_output_no(var))
		return ;
	sort_value_no_spec(var, ((var->formats[0] == '%') ? (1) : (0)), \
												0, ft_strdup(var->formats));
	flags = var->output->flag;
	if (var->output->flag[1] && var->output->flag[2])
		var->output->flag[1] = 0;
	if (var->output->flag[4] && var->output->flag[3])
		var->output->flag[3] = 0;
	if (var->output->specifier && var->output->specifier[0])
		str = ft_strdup(var->output->specifier);
	if (str)
		str = spec_no_width(var, str, flags);
	ft_putstr(var->str_tmp);
	if (str)
		ft_putstr(str);
	var->len_return += ft_strlen(var->str_tmp) + \
											((str) ? (ft_strlen(str)) : (0));
	ft_strdel(&var->str_tmp);
	ft_strdel(&str);
}
