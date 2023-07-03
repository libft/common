/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_strndup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:41:53 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:42:06 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

#include <stdlib.h>

t_err	ft_common_strndup(const char *src, size_t length, char **out)
{
	char	*result;
	size_t	i;

	result = malloc(length + 1);
	if (!result)
		return (true);
	i = (size_t)-1;
	while (++i < length)
		result[i] = src[i];
	result[length] = '\0';
	*out = result;
	return (false);
}
