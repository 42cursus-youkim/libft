/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:42:42 by youkim            #+#    #+#             */
/*   Updated: 2021/05/09 11:16:52 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	if (!(ret = malloc((len + 1) * sizeof(char))))
		return (0);
	ret[len] = 0;
	i = -1;
	while (++i < len)
	{
		ret[i] = s1[i];
	}
	return (ret);
}
