/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:49:21 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/15 12:49:22 by gauffret         ###   ########.fr       */
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
** Tronque la chaine si elle est plus grande que la precision
*/

char		*spec_char_prec(char *str, int precision)
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

static char	*spec_char_width_2(char *str, int *flags, int len, char *res)
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

char		*spec_char_width(t_ptf *var, char *str, int *flags)
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
			str = spec_char_width_2(str, flags, width - len, res);
	}
	return (str);
}

/*
** Permet de gerer le %c
*/

void		recup_spec_char(t_ptf *var, char spec, int c)
{
	char	*str;
	int		*flags;
	int		i;

	i = 0;
	(void)spec;
	str = NULL;
	flags = var->output->flag;
	str = ft_strdup("c");
	str = spec_char_width(var, str, flags);
	if (str)
		ft_putstr(var->str_tmp);
	while (str && str[i])
	{
		if (str[i] == 'c')
			ft_putchar(c);
		else
			ft_putchar(str[i]);
		i++;
	}
	var->len_return += ft_strlen(var->str_tmp) + ft_strlen(str);
	ft_strdel(&str);
	ft_strdel(&var->str_tmp);
}
