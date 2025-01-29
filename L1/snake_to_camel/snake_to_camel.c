#include <unistd.h>

int toUpper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int ft_putchar(char c)
{
    return write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] == '_')
                ft_putchar(toUpper(argv[1][++i]));
            else
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}