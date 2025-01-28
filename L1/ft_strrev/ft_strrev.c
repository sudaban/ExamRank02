#include <unistd.h>

char    *ft_strrev(char *str)
{
    char temp;
    int i = 0, l = 0;
    
    while (str[l])
        l++;
    while(i < (l / 2))
    {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
        i++;
    }
    return str;
}

#include <stdio.h>
int main()
{
    char str[] = "Hello, World!";
    printf("Original: %s\n", str);
    printf("Reversed: %s\n", ft_strrev(str));
}