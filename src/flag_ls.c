/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_ls.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 11:09:08 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/13 11:09:09 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static char	*spec_wstr_width_2(char *str, int *flags, int len, char *res)
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

char		*spec_wstr_width(t_ptf *var, char *str, int len, int *flags)
{
	int		width;
	char	*res;
	int		i;

	i = -1;
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
			str = spec_wstr_width_2(str, flags, width - len, res);
	}
	return (str);
}

/*
** Permet de calculer la longueur de la chaine multi-octet
*/

int			spec_lstr_wlen(char *bin)
{
	int		nb;

	nb = 0;
	if (ft_strlen(bin) < 8)
		nb = 1;
	if (ft_strlen(bin) >= 8 && ft_strlen(bin) <= 11)
		nb = 2;
	if (ft_strlen(bin) >= 12 && ft_strlen(bin) <= 16)
		nb = 3;
	if (ft_strlen(bin) >= 17 && ft_strlen(bin) <= 21)
		nb = 4;
	return (nb);
}

/*
** Permet de gerer le %S
*/

int			recup_spec_lstr(t_ptf *var, int nb)
{
	wchar_t		*wstr;
	char		*str;
	int			wlen;

	str = NULL;
	wstr = (wchar_t *)va_arg(var->args, char *);
	wlen = ft_wstrlen(wstr);
	if (wlen == -1)
		return (-1);
	ft_putstr(var->str_tmp);
	if (var->output->precision == 0)
		str = spec_lstr_empty(str, var->output->width, var->output->flag);
	else if (wstr)
		nb = spec_lstr_full(var, wstr, &str, wlen);
	else
	{
		str = ft_strdup("(null)");
		ft_putstr(str);
	}
	var->len_return += ft_strlen(var->str_tmp) + ft_strlen(str) + \
												((nb > 0) ? (nb - 1) : (nb));
	ft_strdel(&str);
	ft_strdel(&var->str_tmp);
	return (0);
}
