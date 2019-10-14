/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:03:20 by rjeraldi          #+#    #+#             */
/*   Updated: 2019/10/14 16:02:33 by rjeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	s_i;

	s_i = 0;
	while (*(src + s_i) && s_i < len)
	{
		*(dst + s_i) = *(src + s_i);
		s_i++;
	}
	while (s_i < len)
	{
		*(dst + s_i) = '\0';
		s_i++;
	}
	return (dst);
}
