#include "./rida/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	if(dest == NULL) return NULL;
	unsigned char *d;
	unsigned char *s;
	s = (unsigned char *) src;
	d = (unsigned char *) dest; 
	while (n-- > 0)
		*d++ = *s++;
	return (dest);	
}
