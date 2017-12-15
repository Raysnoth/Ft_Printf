/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 10:57:15 by gauffret          #+#    #+#             */
/*   Updated: 2017/01/02 10:57:29 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Initialise la structure
*/

t_ptf	*init_var(t_ptf *var, char *formats)
{
	var = (t_ptf *)malloc(sizeof(t_ptf));
	var->result = NULL;
	var->formats = ft_strdup(formats);
	var->str_tmp = NULL;
	var->len_return = 0;
	return (var);
}

/*
** Fonction de depart
** Recupere la chaine de caractere et les arguments
*/

int		ft_printf(const char *formats, ...)
{
	t_ptf		*var;
	int			len;
	static int	error;

	if (!formats)
		return (0);
	var = NULL;
	len = 0;
	var = init_var(var, (char *)formats);
	va_start(var->args, formats);
	len = treat_formats(var);
	len = ((len == -1) ? (len) : (var->len_return));
	if (len == -1)
		error = -1;
	if (error == -1)
		len = error;
	ft_strdel(&var->str_tmp);
	ft_strdel(&var->formats);
	ft_memdel((void **)&var);
	va_end(var->args);
	return (len);
}
