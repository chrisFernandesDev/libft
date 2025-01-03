/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:32:00 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:32:00 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Função copia no máximo n bytes de src para dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[10] = "maca";
	char	*src = "banana";
	ft_memcpy(dest, src, 2);
	printf("Meu: %s\n", dest);
	printf("Original %s", (char *)memcpy(dest, src, 1));
	return (0);
}
*/