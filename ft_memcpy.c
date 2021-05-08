/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:38:57 by youkim            #+#    #+#             */
/*   Updated: 2021/05/08 21:57:58 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstptr;
	const unsigned char	*srcptr;

	if (!dst)
		return (0);
	if (!n || !src)
		return (dst);
	i = 0;
	srcptr = (unsigned char *)src;
	dstptr = (unsigned char *)dst;
	while (i < n && src && dst)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return (dst);
}
