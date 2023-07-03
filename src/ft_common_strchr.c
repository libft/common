/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_strchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:40:48 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:40:58 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

bool	ft_common_strchr(const char *str, char c, size_t *out)
{
	size_t	i;

	i = (size_t)-1;
	while (str[++i])
	{
		if (str[i] == c)
		{
			*out = i;
			return (true);
		}
	}
	*out = i;
	return (false);
}
