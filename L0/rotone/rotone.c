#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || argv[1][i] )
            i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}
