/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_lc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:50:49 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 15:50:49 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static char	*spec_wchar_width_2(char *str, int *flags, int len, char *res)
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

char		*spec_wchar_width(t_ptf *var, char *str, int *flags, int len_char)
{
	int		width;
	char	*res;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(str) + (len_char - 1);
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
			str = spec_wchar_width_2(str, flags, width - len, res);
	}
	return (str);
}
