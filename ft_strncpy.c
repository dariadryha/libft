/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:05:01 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/30 20:05:02 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	k;
	int		j;

	k = 0;
	j = 0;
	while (k < len)
	{
		if (src[k] != '\0' && j == 0)
			dst[k] = src[k];
		else
		{
			j = 1;
			dst[k] = '\0';
		}
		k++;
	}
	return (dst);
}
