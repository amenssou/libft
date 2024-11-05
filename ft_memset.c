/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:05:26 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/22 19:34:48 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
/*
int main ()
{
	char c[] = "bonjour comment ca va";
	ft_memset(c, '7', 7);
	printf("%s" ,c);
}*/
