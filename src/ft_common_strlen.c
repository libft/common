/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_strlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:41:44 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:41:46 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

size_t	ft_common_strlen(const char *str)
{
	size_t	result;

	result = 0;
	while (*str)
	{
		str++;
		result++;
	}
	return (result);
}
