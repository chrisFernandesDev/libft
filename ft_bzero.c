#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}
/*
int     main(void)
{
    char str[] = "Banana";
	ft_bzero(str + 2, 4);
	printf("%s\n", str);
    return (0);
}
*/