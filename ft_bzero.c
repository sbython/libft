#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	char *d;
	
	d = (char *) s;
	while (i < n)
		d[i++] = 0;	
}
