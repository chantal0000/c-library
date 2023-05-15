/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:46:27 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/15 19:22:27 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
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
