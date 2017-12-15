/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 15:20:23 by gauffret          #+#    #+#             */
/*   Updated: 2017/12/14 11:40:25 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonctions qui permettent de recuperer les arguments en fonction
** des attribut de conversion et de lancer les fonction associees
*/

static int	recup_spec_5(t_ptf *var, char *res, char spec, char *lenght)
{
	if (spec == 'o')
	{
		if (lenght && !ft_strcmp(lenght, "h"))
			res = recup_spec_oct(var,ft_uintmaxtoa_base((unsigned \
								short int)va_arg(var->args, unsigned int), 8));
		else if (lenght && !ft_strcmp(lenght, "hh"))
			res = recup_spec_oct(var, ft_uintmaxtoa_base((unsigned \
									char)va_arg(var->args, unsigned int), 8));
		else if (lenght && !ft_strcmp(lenght, "ll"))
			res = recup_spec_oct(var, ft_uintmaxtoa_base(\
									va_arg(var->args, unsigned long long), 8));
		else if (lenght && lenght[0] == 'l')
			res = recup_spec_oct(var, ft_uintmaxtoa_base(va_arg(\
												var->args, unsigned long), 8));
		else if (lenght && lenght[0] == 'j')
			res = recup_spec_oct(var, ft_uintmaxtoa_base(\
											va_arg(var->args, uintmax_t), 8));
		else if (lenght && lenght[0] == 'z')
			res = recup_spec_oct(var, ft_uintmaxtoa_base(\
												va_arg(var->args, size_t), 8));
		else
			res = recup_spec_oct(var, ft_uintmaxtoa_base(va_arg(\
												var->args, unsigned int), 8));
	}
	return (recup_spec_end(var, res, spec, lenght));
}

static int	recup_spec_4(t_ptf *var, char *res, char spec, char *lenght)
{
	if (spec == 'u')
	{
		if (lenght && !ft_strcmp(lenght, "h"))
			res = recup_spec_uint(var, ft_uintmaxtoa((unsigned short \
										int)va_arg(var->args, unsigned int)));
		else if (lenght && !ft_strcmp(lenght, "hh"))
			res = recup_spec_uint(var, ft_uintmaxtoa((unsigned \
									char)va_arg(var->args, unsigned int)));
		else if (lenght && !ft_strcmp(lenght, "ll"))
			res = recup_spec_uint(var, ft_uintmaxtoa(va_arg(var->args, \
														unsigned long long)));
		else if (lenght && lenght[0] == 'l')
			res = recup_spec_uint(var, ft_uintmaxtoa(va_arg(var->args, \
														unsigned long)));
		else if (lenght && lenght[0] == 'j')
			res = recup_spec_uint(var, ft_uintmaxtoa(va_arg(var->args, \
														uintmax_t)));
		else if (lenght && lenght[0] == 'z')
			res = recup_spec_uint(var, ft_uintmaxtoa(va_arg(var->args, \
														size_t)));
		else
			res = recup_spec_uint(var, ft_uintmaxtoa(va_arg(var->args, \
														unsigned int)));
	}
	return (recup_spec_5(var, res, spec, lenght));
}

static int	recup_spec_3(t_ptf *var, char spec, char *lenght, char *res)
{
	if (spec == 'd' || spec == 'i')
	{
		if (lenght && !ft_strcmp(lenght, "h"))
			res = recup_spec_int(var, ft_intmaxtoa((short \
											int)va_arg(var->args, int)), 0);
		else if (lenght && !ft_strcmp(lenght, "hh"))
			res = recup_spec_int(var, ft_intmaxtoa((signed \
										char)va_arg(var->args, int)), 0);
		else if (lenght && !ft_strcmp(lenght, "ll"))
			res = recup_spec_int(var, ft_intmaxtoa(va_arg(var->args, \
														long long int)), 0);
		else if (lenght && lenght[0] == 'l')
			res = recup_spec_int(var, ft_intmaxtoa(va_arg(var->args, long)), 0);
		else if (lenght && lenght[0] == 'j')
			res = recup_spec_int(var, ft_intmaxtoa(va_arg(var->args, \
															intmax_t)), 0);
		else if (lenght && lenght[0] == 'z')
			res = recup_spec_int(var, ft_intmaxtoa(va_arg(var->args, \
															size_t)), 0);
		else
			res = recup_spec_int(var, ft_intmaxtoa(va_arg(var->args, int)), 0);
	}
	return (recup_spec_4(var, res, spec, lenght));
}

static int	recup_spec_2(t_ptf *var, char spec, char *lenght, char *res)
{
	if (spec == 'x' || spec == 'X')
	{
		if (lenght && !ft_strcmp(lenght, "h"))
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base((unsigned \
							short int)va_arg(var->args, unsigned int), 16));
		else if (lenght && !ft_strcmp(lenght, "hh"))
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base((unsigned \
									char)va_arg(var->args, unsigned int), 16));
		else if (lenght && !ft_strcmp(lenght, "ll"))
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base(\
								va_arg(var->args, unsigned long long), 16));
		else if (lenght && lenght[0] == 'l')
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base(\
										va_arg(var->args, unsigned long), 16));
		else if (lenght && lenght[0] == 'j')
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base(\
											va_arg(var->args, uintmax_t), 16));
		else if (lenght && lenght[0] == 'z')
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base(\
											va_arg(var->args, size_t), 16));
		else
			res = recup_spec_hex(var, spec, ft_uintmaxtoa_base(\
										va_arg(var->args, unsigned int), 16));
	}
	return (recup_spec_3(var, spec, lenght, res));
}

int			recup_spec(t_ptf *var, char spec)
{
	char	*res;
	char	*lenght;

	res = NULL;
	lenght = var->output->lenght;
	if (spec == 'p')
		res = recup_spec_addrp(var, res);
	if (spec == 'f' || spec == 'F')
		res = recup_spec_float(var, ft_ftoa(va_arg(var->args, double), \
	((var->output->precision == -1) ? (6) : (var->output->precision)), res));
	if (spec == 'e' || spec == 'E')
		res = recup_spec_scien(var, spec, recup_nb_e_g(va_arg(var->args, \
													double), var, NULL));
	if (spec == 'b' || spec == 'B')
		res = recup_spec_bin(var, ft_uintmaxtoa_base(va_arg(var->args, \
															unsigned int), 2));
	if (spec == 'g' || spec == 'G')
		res = recup_spec_betdot(var, NULL, va_arg(var->args, double), 0);
	if (spec == 'O')
		res = recup_spec_oct(var, ft_uintmaxtoa_base(va_arg(var->args, \
													unsigned long long), 8));
	if (spec == 'D')
		res = recup_spec_int(var, ft_intmaxtoa(va_arg(var->args, long)), 0);
	return (recup_spec_2(var, spec, lenght, res));
}
