/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:15:41 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/10 12:40:31 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;

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
