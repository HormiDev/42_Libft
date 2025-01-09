/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:05:52 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/09 02:51:02 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

int	ft_conversion(char *str, int *len, const char *format, va_list varg)
{
	void	*p;

	if (ft_strncmp_p(format, "%c", 2) == 0)
		return (ft_sprintf_char(str, len, va_arg(varg, int)), 1);
	else if (ft_strncmp_p(format, "%s", 2) == 0)
		return (ft_sprintf_str(str, len, va_arg(varg, char *)), 1);
	else if (ft_strncmp_p(format, "%p", 2) == 0)
	{
		p = va_arg(varg, void *);
		if (p == 0)
			ft_sprintf_str(str, len, "(nil)");
		else
		{
			ft_sprintf_str(str, len, "0x");
			ft_sprintf_nbr_base_u(str, len, (unsigned long)p, HEXA_MIN);
		}
		return (1);
	}
	else if (ft_strncmp_p(format, "%u", 2) == 0)
		return (ft_sprintf_nbr_base(str, len, va_arg(varg, unsigned int), DECIMAL), 1);
	else if (ft_strncmp_p(format, "%d", 2) == 0
		|| ft_strncmp_p(format, "%i", 2) == 0)
		return (ft_sprintf_nbr_base(str, len, va_arg(varg, int), DECIMAL), 1);
	else if (ft_strncmp_p(format, "%x", 2) == 0)
		return (ft_sprintf_nbr_base_u(str, len, va_arg(varg, unsigned int), HEXA), 1);
	else if (ft_strncmp_p(format, "%X", 2) == 0)
		return (ft_sprintf_nbr_base_u(str, len, va_arg(varg, unsigned int), HEXA_MIN), 1);
	else if (ft_strncmp_p(format, "%%", 2) == 0)
		return (ft_sprintf_char(str, len, '%'), 1);
	else if (ft_strncmp_p(format, "%ld", 3) == 0)
		return (ft_sprintf_nbr_base(str, len, va_arg(varg, long), DECIMAL), 2);
	else
		return (1);
}

int	ft_sprintf(char *str, const char *format, ...)
{
	int		i;
	int		len;
	va_list	varg;

	va_start(varg, format);
	i = 0;
	len = 0;
	while (format[i] != 0)
	{
		if (format[i] == '%')
			i += ft_conversion(str, &len, &format[i], varg);
		else
		{
			str[len] = format[i];
			len++;
		}
		i++;
	}
	str[len] = 0;
	va_end(varg);
	return (len);
}
