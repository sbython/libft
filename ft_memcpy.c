#include "./rida/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	if(dest == NULL) return NULL;
	char *d;
	char *s;
	s = (char *) src;
	d = (char *) dest; 
	while (n-- > 0)
		*d++ = *s++;
	return (dest);	
}
