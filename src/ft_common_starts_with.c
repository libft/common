/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_starts_with.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:40:09 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:40:21 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

bool	ft_common_starts_with(const char *self, const char *starts, size_t *out)
{
	size_t	i;

	i = 0;
	while (self[i] && starts[i] && self[i] == starts[i])
		i++;
	if (starts[i])
	{
		if (out)
			*out = i;
		return (true);
	}
	return (false);
}
