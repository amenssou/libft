/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:54:25 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 19:30:37 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		if ((unsigned char )c == p[i])
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char c[] = "bonjour";
	char *s = ft_memchr(c, 'o', 7);
	printf("%s", s);
}*/
