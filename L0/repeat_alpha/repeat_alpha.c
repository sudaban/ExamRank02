#include <unistd.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    if (argc == 2)
    {
        while (argv[1][num])
        {
            if (argv[1][num] >= 'a' && argv[1][num] <= 'z')
            {
                for (int k = 0; k< argv[1][num]-96; k++)
					write (1, &argv[1][num], 1);
            }
            else if (argv[1][num] >= 'A' && argv[1][num] <= 'Z')
            {
                for (int i = 0; i < argv[1][num] - 64; i++)
                {
                    write(1, &argv[1][num], 1);
                }
                
            }
            else write(1, &argv[1][num], 1);
			num++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}
