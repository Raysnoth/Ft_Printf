/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_b2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:00:49 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/28 11:00:53 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Met des ' ' pour remplir la largeur si le flags '0' est pas present
** Si le flags '-' est present la largeur est rajouter a la fin de la chaine
*/

static char	*spec_bin_width_3(char *str, int *flags, int len, char *res)
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

/*
** Met des '0' pour remplir la largeur si le flags '0' est present
** Si un ' ' etais present il est deplacer en debut de chaine
*/

static char	*spec_bin_width_2(char *str, int len, char *res)
{
	int		i;

	i = -1;
	while (++i < len)
		res[i] = '0';
	res = ft_concat(res, str);
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
	return (str);
}

/*
** Fonction qui permet de gerer la largeur de la chaine
** en prenant en compte les flags et la largeur
** Si la largeur est plus grande que la taille de la chaine
*/

char		*spec_bin_width(t_ptf *var, char *str, int *flags)
{
	int		width;
	char	*res;
	int		len;

	len = ft_strlen(str);
	width = var->output->width;
	if (width > len)
	{
		res = ft_strnew(width - len);
		if (flags[1])
			str = spec_bin_width_2(str, (width - len), res);
		else
			str = spec_bin_width_3(str, flags, (width - len), res);
	}
	return (str);
}
