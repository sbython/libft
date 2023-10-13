#include "./rida/libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    if(dest == NULL) 
        return NULL;
    int i = 0;
    unsigned char *d;
    unsigned char *s;
    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    while ( (s[i] != c )&& s[i])
            i++; 
    if (!s[i])
    {
        return NULL;
    }
    i = 0;
    while ( s[i] &&(n-- > 0) && s[i] != c)
        *d++ = s[i++];
    *d = '\0';  
    return (dest);    
}
