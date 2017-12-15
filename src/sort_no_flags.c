/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_no_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:23:54 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/27 15:23:55 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** sort_no_flags.c && sort_no_flags2.c
** Ensemble de fonction permet de recuperer les parametre d'affchage
** jusqu'au premier caractere non voulu
** Si un meme parametre est mis plusieurs fois, le plus loin dans la chaine
** est conserve (sauf dans le cas des conversion des longueur ou le plus
** grand est garde). Apres recuperation les flags sont trier, si
** des flags sont incompatible entre eux, le flags faible est retirer
*/

static int	flags_no_width_star(t_ptf *var, int i, int action)
{
	if (action == 1)
	{
		var->output->width = va_arg(var->args, int);
		if (var->output->width < 0)
		{
			var->output->flag[2] = 1;
			var->output->width *= -1;
		}
	}
	if (action == 2)
		var->output->precision = va_arg(var->args, unsigned int);
	i++;
	return (i);
}

static int	precision_no_flags(t_ptf *var, int i, char *all)
{
	i++;
	if (ft_isdigit(all[i]) || (all[i] == '-' && ft_isdigit(all[i + 1])))
	{
		if (all[i] == '-')
		{
			i++;
			while (all[i] && ft_isdigit(all[i]))
				i++;
			var->output->precision = 0;
		}
		var->output->precision = ft_atoi(all + i);
		while (all[i] && ft_isdigit(all[i]))
			i++;
	}
	else if (all[i] == '*')
		i = flags_width_star(var, i, 2);
	else
		var->output->precision = 0;
	return (i);
}

static int	width_no_flags(t_ptf *var, int i, char *all)
{
	var->output->width = ft_atoi(all + i);
	while (all[i] && ft_isdigit(all[i]))
		i++;
	return (i);
}

void		sort_value_no_spec(t_ptf *var, int i, int j, char *all)
{
	while (all && all[i])
	{
		if ((j = ft_strchri(FLAG, all[i])) < 5)
		{
			var->output->flag[j] = 1;
			i++;
		}
		else if (all[i] == '*')
			i = flags_no_width_star(var, i, 1);
		else if (ft_isdigit(all[i]))
			i = width_no_flags(var, i, all);
		else if (all[i] == '.')
			i = precision_no_flags(var, i, all);
		else if ((j = ft_strchri(LENG, all[i])) < 4)
			i = lenght_no_flags(var, i, all);
		else
			break ;
	}
	if (all[i])
		var->output->specifier = ft_strsub(all, i, 1);
	if (all[i])
		ft_realloc_sub(&var->formats, i + 1, ft_strlen(all) - (i + 1));
	else
		ft_strdel(&var->formats);
	ft_strdel(&all);
}
