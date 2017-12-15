/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recup_nb_e_g.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:11:54 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/20 11:11:56 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonctions permettant de recuperer l'argument correctement pour %E et %G
*/

static int	recup_nb_e_g3(t_ptf *var, char *str, int i, int *prec_itoa)
{
	int		j;

	j = 0;
	while (str && str[i] && ft_isdigit(str[i]))
		i++;
	if (str && str[i] && str[i] == '.')
	{
		i++;
		while (str && str[i + j] && j < *prec_itoa)
			j++;
		if (j == *prec_itoa)
			return (0);
		else
		{
			*prec_itoa += ((var->output->precision < 0) ? (6) : \
											(var->output->precision) + 1);
			return (1);
		}
	}
	return (1);
}

static int	recup_nb_e_g2(t_ptf *var, char *str, int prec, int *prec_itoa)
{
	int		j;
	int		h;

	j = 0;
	h = 0;
	while (str && str[h] && (ft_isdigit(str[h]) && str[h] == '0'))
		h++;
	while (str && str[j + h] && (j + h) < *prec_itoa)
		j++;
	if (j > prec)
		return (0);
	else
	{
		*prec_itoa += ((var->output->precision < 0) ? (6) : \
												(var->output->precision) + 1);
		return (1);
	}
	return (1);
}

char		*recup_nb_e_g(double nb, t_ptf *var, char *str)
{
	int		i;
	int		prec_itoa;
	int		prec;

	prec_itoa = ((var->output->precision < 0) ? (6) : \
							(var->output->precision) + 1);
	prec = prec_itoa;
	while (1)
	{
		i = 0;
		str = ft_ftoa(nb, prec_itoa, str);
		while (str && str[i] && ((ft_isdigit(str[i]) && str[i] == '0') \
											|| (str[i] == '-')))
			i++;
		if (str && str[i] && str[i] == '.')
		{
			if (!recup_nb_e_g2(var, str + ++i, prec, &prec_itoa))
				break ;
		}
		else if (!recup_nb_e_g3(var, str, i, &prec_itoa))
			break ;
		ft_strdel(&str);
	}
	return (str);
}
