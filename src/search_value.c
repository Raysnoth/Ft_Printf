/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 12:30:19 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/07 12:30:20 by gauffret         ###   ########.fr       */
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
** Permet de lancer la fonction qui gere soit le cas ou il n'y a pas de
** specifier soit le cas ou il y en a un
*/

int		treat_and_del(t_ptf *var, int action)
{
	int		ret;

	ret = 0;
	if (action == 0)
		treat_no_spec_found(var);
	if (action == 1)
		if (recup_spec(var, var->output->specifier[0]) == -1)
			ret = -1;
	if (var->output->all)
		ft_strdel(&var->output->all);
	ft_memdel((void **)&var->output->flag);
	ft_strdel(&var->output->lenght);
	ft_strdel(&var->output->specifier);
	ft_memdel((void **)&var->output);
	if (ret == -1)
		return (-1);
	return (0);
}

/*
** Initialise la structure qui servira a stocker les donnees
** pour le traitement de l'argument
*/

int		init_output(t_ptf *var)
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
** Fonction qui permet de verifier si un specifier est present ou non
*/

int		search_value(t_ptf *var)
{
	char	*format;
	int		i;

	i = 1;
	format = var->formats;
	if (!format || format[0] != '%' || format[0] == '\0')
		return (0);
	while (format && format[i] && (ft_strchri(SPEC, format[i]) == 22) && \
										(ft_strchri(CHAR, format[i]) < 22))
		i++;
	if (ft_strchri(SPEC, format[i]) == 22)
		treat_and_del(var, 0);
	else
	{
		init_output(var);
		var->output->all = ft_strsub(format, 1, i);
		ft_realloc_sub(&var->formats, i + 1, ft_strlen(var->formats) - (i + 1));
		sort_value(var, 0, 0, var->output->all);
		if (var->output->flag[1] && var->output->flag[2])
			var->output->flag[1] = 0;
		if (var->output->flag[4] && var->output->flag[3])
			var->output->flag[3] = 0;
		return (treat_and_del(var, 1));
	}
	return (0);
}
