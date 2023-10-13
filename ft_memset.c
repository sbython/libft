/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:23:16 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/21 17:05:39 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./rida/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len-- > 0)
		*(ptr++) = (char)c;
	return (b);
}
