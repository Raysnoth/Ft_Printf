/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:35:01 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 15:35:02 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonction qui premet d'afficher la palette de couleur possible
*/

void	all_color(char *color)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 15)
	{
		ft_printf("%s%d%s%d%s\t", "\e[38;5;", i, "m", i, "\e[0m");
		if (!((i + 1) % 6))
			ft_putchar('\n');
		i++;
	}
	ft_putendl("\n");
	while (i <= 256)
	{
		ft_printf("%s%d%s%d%s\t", "\e[38;5;", i, "m", i, "\e[0m");
		if (i == 51 || i == 87 || i == 123 || i == 159 || i == 195 || i == 231)
			ft_putstr("\n\n");
		else if (!((j + 1) % 6))
			ft_putstr("\n");
		i++;
		j++;
	}
	ft_putchar('\n');
	ft_strdel(&color);
}

/*
** Fonction qui traite le cas ou il n'y a pas de couleur apres '{'
*/

void	no_color_found(t_ptf *var, int i)
{
	ft_putstr(var->str_tmp);
	ft_putchar('{');
	var->len_return += ft_strlen(var->str_tmp) + 1;
	ft_strdel(&var->str_tmp);
	if (var->formats && var->formats[i])
		ft_realloc_sub(&var->formats, i + 1, ft_strlen(var->formats) - i);
	else if (var->formats[i - 1])
		var->formats[i - 1] = '\0';
}
