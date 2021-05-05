/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:43:23 by youkim            #+#    #+#             */
/*   Updated: 2021/05/05 21:33:39 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	unsigned char chr;

	if (!(0 <= c && c <= 255))
		return (0);
	chr = (unsigned char)c;
	if ('0' <= chr && chr <= '9')
		return (1);
	return (0);
}
