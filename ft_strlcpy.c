/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:47:42 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/09 19:07:56 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int main()
{
	char dest[20];
	const char *src = "Hello World";

	size_t size = 5;

	// size = ft_strlcpy(dest, src, sizeof(dest)); 

	printf("mine: %zu\n", ft_strlcpy(dest, src, size));
	printf("orig: %zu\n", strlcpy(dest, src, size));
	return (0);
}
