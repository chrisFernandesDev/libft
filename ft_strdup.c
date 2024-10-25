/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:32:58 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:32:58 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	This function is used to duplicate a string, 
	it dynamically allocates memory to 
	store a copy of a string given as input and returns 
	a pointer to this new string.
*/
char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strdup(argv[1]));
	return (0);
}
*/