/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:41:53 by ddryha            #+#    #+#             */
/*   Updated: 2017/11/01 12:41:54 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int k;

	k = ft_strlen(s);
	while (k > 0 && s[k] != (char)c)
		k--;
	return (s[k] == (char)c ? (char *)s + k : NULL);
}
