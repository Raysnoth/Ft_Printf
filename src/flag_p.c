/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 10:11:47 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/16 10:11:48 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

unsigned long	pow_addr(int pow)
{
	unsigned long res;

	res = 1;
	while (pow != 0)
	{
		res *= 16;
		pow--;
	}
	return (res);
}

/*
** Fonction qui permet de connaitre la taille du tableau a allouer pour
** l'adresse en hexadecimal
*/

int				len_tab_addr(unsigned long addr)
{
	int		len;

	len = 0;
	while (pow_addr(len) < addr)
		len++;
	return (len - 1);
}

/*
** Permet de convertir le nombre recuperer en hexadecimal
*/

char			*hexa_addr(int i_max, unsigned long addr)
{
	char			*base;
	int				i;
	char			*res;

	i = -1;
	res = ft_strnew(i_max + 1);
	if (res)
	{
		base = ft_strdup("0123456789abcdef");
		i = -1;
		while (i < i_max)
			res[++i] = '0';
		i = i_max;
		while ((addr / 16) > 0 || i >= i_max)
		{
			res[i] = base[(addr % 16)];
			addr /= 16;
			i--;
		}
		res[i] = base[(addr % 16)];
		ft_strdel(&base);
	}
	return (res);
}

/*
** Fonction qui permet de lancer le traitement pour le %p
*/

char			*recup_spec_addrp(t_ptf *var, char *str)
{
	unsigned long	addr;
	char			*res;
	int				*flags;
	int				precision;

	flags = var->output->flag;
	precision = ((var->output->precision < 0) ? (0) : (var->output->precision));
	addr = (unsigned long)va_arg(var->args, void *);
	if (!addr && var->output->precision == 0)
		res = ft_strdup("");
	if (!addr && var->output->precision != 0)
		res = ft_strdup("0");
	if (addr)
		res = hexa_addr(len_tab_addr(addr), addr);
	if (precision != 0)
		res = spec_addr_precision(res, precision, -1);
	str = ft_strdup("0x");
	str = ft_concat(str, res);
	str = spec_addr_width(var, str, flags, -1);
	ft_strdel(&res);
	return (str);
}
