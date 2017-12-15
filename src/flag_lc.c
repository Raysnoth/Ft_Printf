/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_lc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 11:56:25 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/23 11:56:26 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Permet d'afficher la chaine et le caractere multi-octet correctement
*/

static int	print_spec_lchar(char *str, int *nbr, int i, int j)
{
	while (str && str[++i])
	{
		if (str[i] == 'c')
			while (j < 5 && nbr[j] != -1)
			{
				ft_putchar(nbr[j]);
				j++;
			}
		else
			ft_putchar(str[i]);
	}
	return (j);
}

void		spec_lchar_mb(t_ptf *var, wchar_t w, int *flags, char *str)
{
	int			*nbr;
	int			len_char;
	int			j;

	j = 0;
	len_char = 0;
	nbr = ft_parse_binary((unsigned long)w);
	while (nbr && nbr[len_char] != -1)
		len_char++;
	str = ft_strdup("c");
	str = spec_wchar_width(var, str, flags, len_char);
	if (str)
		ft_putstr(var->str_tmp);
	j = print_spec_lchar(str, nbr, -1, j);
	var->len_return += ft_strlen(var->str_tmp) + ft_strlen(str) + j - 1;
	ft_memdel((void **)&nbr);
	ft_strdel(&str);
	ft_strdel(&var->str_tmp);
}

/*
** Permet de gerer %C
*/

int			recup_spec_lchar(t_ptf *var, char *str)
{
	int			j;
	wchar_t		w;

	j = 0;
	w = (wchar_t)va_arg(var->args, int);
	if (MB_CUR_MAX == 1 && w > 255)
		return (-1);
	if (MB_CUR_MAX == 1)
		recup_spec_char(var, 'c', (char)w);
	else
		spec_lchar_mb(var, w, var->output->flag, str);
	return (0);
}
