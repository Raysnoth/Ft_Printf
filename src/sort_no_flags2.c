/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_no_flags2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:58:05 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/27 15:58:07 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static char	*lenght_no_flags_sort(t_ptf *var, char *lenght)
{
	char	*res;
	char	*var_lenght;

	res = NULL;
	var_lenght = var->output->lenght;
	if (!var->output->lenght)
		return (lenght);
	else
	{
		if (!ft_strcmp(var->output->lenght, "h") && !ft_strcmp(lenght, "j"))
			res = ft_strdup(lenght);
		else if (!ft_strcmp(var_lenght, "hh") && !ft_strcmp(lenght, "l"))
			res = ft_strdup(lenght);
		else
			res = ft_strdup(var->output->lenght);
	}
	ft_strdel(&var->output->lenght);
	ft_strdel(&lenght);
	return (res);
}

int			lenght_no_flags(t_ptf *var, int i, char *all)
{
	char	*lenght;

	lenght = NULL;
	if (all && all[i] && ((all[i] == 'j' || all[i] == 'z')))
	{
		lenght = ft_strsub(all, i, 1);
		i++;
	}
	else if (all && all[i] && (all[i] == 'h' || all[i] == 'l'))
	{
		if (all[i] && all[i + 1] && ((all[i] == 'h' && all[i + 1] == 'h') || \
									(all[i] == 'l' && all[i + 1] == 'l')))
		{
			lenght = ft_strsub(all, i, 2);
			i += 2;
		}
		else
		{
			lenght = ft_strsub(all, i, 1);
			i++;
		}
	}
	var->output->lenght = lenght_no_flags_sort(var, lenght);
	return (i);
}
