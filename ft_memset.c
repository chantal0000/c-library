/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:15:41 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/10 16:09:32 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		*ptr = c;
		i++;
		ptr++;
	}
	return (str);
}
/*
int main(void)
{
	char str[50];
	char str1[50];
	printf("%s\n", ft_memset(str1, 'a', 5));
	printf("%s\n", memset(str, 'a', 5));
	return (0);
}*/
