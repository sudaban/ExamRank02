#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0, j = 0;
    while (s[i])
    {
        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                break;;
            }
            if (accept[j] == '\0')
                return i;
            j++;
        }
        i++;
    }
    return i;
}