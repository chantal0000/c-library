/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:46:27 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/10 12:41:01 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}	
	return (dest);
}
/*
int main(void)
{

	char src[] = "Hello, world!";
    char dest[20];
	char dest1[20];

    
    ft_memcpy(dest, src, 6);

   
    printf("dest = %s\n", dest);
	printf("dest1 org = %s\n", memcpy(dest1, "Hello, world!", 6));
    return 0;
}*/
