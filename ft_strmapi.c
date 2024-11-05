/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:10 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/22 19:37:20 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*c;

	i = 0;
	while (s[i])
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
char test(unsigned int a, char c)
{
	return c - 7 + a;
}

#include <stdio.h>

int main()
{
	char *c = ft_strmapi("onjour", test);
	printf("%s", c);
}
*/
