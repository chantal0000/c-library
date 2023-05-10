/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:48:19 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/09 17:58:07 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;	
	while ((s1[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	printf("mine p: %d\n", ft_strncmp("hell", "hel"));
	printf("orig p: %d\n", strcmp("hell", "hel"));

	printf("mine 0: %d\n", ft_strncmp("hell", "hell"));
    printf("orig 0: %d\n", strcmp("hell", "hell"));

	printf("mine n: %d\n", ft_strncmp("he", "hel"));
    printf("orig n: %d\n", strcmp("he", "hel"));

	
	return (0);
}
