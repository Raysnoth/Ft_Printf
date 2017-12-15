/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 11:01:40 by gauffret          #+#    #+#             */
/*   Updated: 2017/12/12 11:21:47 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static void	search_color_5(t_ptf *var, char *color, char *color_low)
{
	ft_putstr(var->str_tmp);
	ft_putchar('{');
	var->len_return += ft_strlen(var->str_tmp) + 1;
	ft_strdel(&var->str_tmp);
	color = ft_concat(color, "}");
	color = ft_concat(color, var->formats);
	ft_strdel(&var->formats);
	var->formats = ft_strdup(color);
	ft_strdel(&color);
	ft_strdel(&color_low);
}

static void	search_color_4(t_ptf *var, char *color, char *color_low, char *res)
{
	if (ft_strcmp(color_low, "orange") == 0)
		res = ft_strdup("\e[38;5;208m");
	if (ft_strcmp(color_low, "white") == 0)
		res = ft_strdup("\e[38;5;255m");
	if (ft_isdigit(color_low[0]))
	{
		res = ft_strdup("\e[38;5;");
		res = ft_concat(res, color_low);
		res = ft_concat(res, "m");
	}
	if (res)
	{
		ft_putstr(var->str_tmp);
		var->len_return += ft_strlen(var->str_tmp);
		ft_putstr(res);
		ft_strdel(&var->str_tmp);
		ft_strdel(&res);
		ft_strdel(&color);
		ft_strdel(&color_low);
	}
	else
		search_color_5(var, color, color_low);
}

static void	search_color_3(t_ptf *var, char *color, char *color_low, char *res)
{
	if (ft_strcmp(color_low, "magenta") == 0)
		res = ft_strdup("\e[38;5;5m");
	if (ft_strcmp(color_low, "cyan") == 0)
		res = ft_strdup("\e[38;5;6m");
	if (ft_strcmp(color_low, "grey") == 0)
		res = ft_strdup("\e[38;5;8m");
	if (ft_strcmp(color_low, "pink") == 0)
		res = ft_strdup("\e[38;5;13m");
	if (ft_strcmp(color_low, "purple") == 0)
		res = ft_strdup("\e[38;5;93m");
	if (ft_strcmp(color_low, "brown") == 0)
		res = ft_strdup("\e[38;5;94m");
	if (res)
	{
		ft_putstr(var->str_tmp);
		var->len_return += ft_strlen(var->str_tmp);
		ft_putstr(res);
		ft_strdel(&var->str_tmp);
		ft_strdel(&color);
		ft_strdel(&res);
		ft_strdel(&color_low);
	}
	else
		search_color_4(var, color, color_low, res);
}

static void	search_color_2(t_ptf *var, char *color, char *color_low, char *res)
{
	if (ft_strcmp(color_low, "eoc") == 0)
		res = ft_strdup("\e[0m");
	if (ft_strcmp(color_low, "blue") == 0)
		res = ft_strdup("\e[38;5;21m");
	if (ft_strcmp(color_low, "red") == 0)
		res = ft_strdup("\e[38;5;1m");
	if (ft_strcmp(color_low, "green") == 0)
		res = ft_strdup("\e[38;5;2m");
	if (ft_strcmp(color_low, "dark") == 0)
		res = ft_strdup("\e[38;5;0m");
	if (ft_strcmp(color_low, "yellow") == 0)
		res = ft_strdup("\e[38;5;226m");
	if (res)
	{
		ft_putstr(var->str_tmp);
		var->len_return += ft_strlen(var->str_tmp);
		ft_putstr(res);
		ft_strdel(&var->str_tmp);
		ft_strdel(&color);
		ft_strdel(&res);
		ft_strdel(&color_low);
	}
	else
		search_color_3(var, color, color_low, res);
}

/*
** Les 5 fonctions permettent de lancer l'affichage de la palette de couleur,
** mettre une couleur dans le retour de printf ou de lancer la fonctions
** qui traite le cas ou il n'y a pas de couleurs
*/

void		search_color(t_ptf *var, int i, char *res, char *color)
{
	char	*color_low;

	color_low = NULL;
	if (!var->formats || var->formats[0] != '{')
		return ;
	while (var->formats[i] && var->formats[i] != '}')
		i++;
	if (var->formats[i] == '}')
	{
		color = ft_strsub(var->formats, 1, i - 1);
		ft_realloc_sub(&var->formats, i + 1, ft_strlen(var->formats) - (i + 1));
		color_low = ft_strdup(color);
		color_low = ft_strtolower(color_low);
		if (ft_strcmp(color_low, "all") == 0)
		{
			ft_strdel(&color_low);
			all_color(color);
		}
		else
			search_color_2(var, color, color_low, res);
	}
	else
		no_color_found(var, 0);
}
