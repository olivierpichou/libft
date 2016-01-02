/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:12:12 by opichou           #+#    #+#             */
/*   Updated: 2015/12/29 15:46:17 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		ft_bzero(void *s, size_t n)
{
	int i;
	int	in;

	i = 0;
	in = n;
	while (in > i)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
