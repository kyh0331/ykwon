/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 03:22:59 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/21 18:10:02 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;

	len = ft_strlen(dst);
	i = 0;
	if (len < dstsize)
	{
		while (src[i] != '\0' && len + i < dstsize - 1)
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	if (len < dstsize)
		return (len + ft_strlen(src));
	else
		return (dstsize + ft_strlen(src));
}
