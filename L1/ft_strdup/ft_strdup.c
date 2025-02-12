#include <stdlib.h>
char    *ft_strdup(char *src)
{
    int i = 0;
    char *ret;

    while (src[i])
        i++;
    ret = malloc(sizeof(char) * (i + 1));
    if (!ret)
        return NULL;
    i = 0;
    while (src[i])
    {
        ret[i] = src[i];
        i++;
    }
    ret[i] = '\0';
    return ret;
}