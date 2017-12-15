/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:56:44 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/27 15:56:45 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonction qui lance le traitement de la couleur
*/

static int	treat_color(int index, t_ptf *var)
{
	var->str_tmp = ft_strsub(var->formats, 0, index);
	ft_realloc_sub(&var->formats, index, ft_strlen(var->formats) - index);
	if (var->formats[0] == '{' && !var->formats[1])
	{
		ft_realloc_sub(&var->formats, 1, ft_strlen(var->formats) - 1);
		return (0);
	}
	if (var->formats[0] == '{')
		search_color(var, 1, NULL, NULL);
	return (0);
}

/*
** Fonction qui lance le traitement pour le %
*/

static int	treat_value(int index, t_ptf *var)
{
	var->str_tmp = ft_strsub(var->formats, 0, index);
	ft_realloc_sub(&var->formats, index, ft_strlen(var->formats) - index);
	if (var->formats[0] == '%' && !var->formats[1])
	{
		ft_realloc_sub(&var->formats, 1, ft_strlen(var->formats) - 1);
		if (var->str_tmp)
		{
			ft_putstr(var->str_tmp);
			var->len_return += ft_strlen(var->str_tmp);
			ft_strdel(&var->str_tmp);
		}
		return (0);
	}
	if (var->formats[0] == '%' && ft_strlen(var->formats) > 1)
	{
		if (search_value(var) == -1)
			return (-1);
	}
	return (0);
}

/*
** Fonction qui recherche % ou {
*/

int			treat_formats(t_ptf *var)
{
	int		res;
	int		i;
	int		j;

	while (var->formats && var->formats[0] != '\0')
	{
		i = ft_strchri(var->formats, '%');
		j = ft_strchri(var->formats, '{');
		if (i < j)
			res = treat_value(i, var);
		if (j < i)
			res = treat_color(j, var);
		if (j == i)
		{
			ft_putstr(var->formats);
			var->len_return += ft_strlen(var->formats);
			ft_strdel(&var->formats);
		}
		if (res == -1)
			return (-1);
	}
	return (res);
}
