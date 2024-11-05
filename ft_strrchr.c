/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:34:58 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/26 18:19:05 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = ft_strlen(s);
	a = (unsigned char) c;
	while (i >= 0)
	{
		if (a == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main ()
{
	char *c = "bonjour amimaameni";
	char *t = ft_strrchr(c, 'b');
	printf("%s",t);
}*/
