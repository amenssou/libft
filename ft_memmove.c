/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:49:29 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/26 20:07:02 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*i
#include <string.h>
int main()
{
	char src[50] = "kirito";
	char dst[50] = "saske";
	memmove(dst, src, 5);
	printf("%s", dst);
}*/
