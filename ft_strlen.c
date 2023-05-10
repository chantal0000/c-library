/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:57:40 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/05 11:14:52 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
            len++;
    return (len);
    }

int main()
{
    printf("%d\n", ft_strlen(""));
    return (0);
}

