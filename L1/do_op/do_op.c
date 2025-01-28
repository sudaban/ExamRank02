#include <stdio.h>
#include <stdlib.h>

void do_op(int n1, int n2, char op)
{
    if (op == '+')
        printf("%d", n1 + n2);
    else if (op == '-')
        printf("%d", n1 - n2);
    else if (op == '/')
    {
        if (n2 != 0)
            printf("%d", n1 / n2);
    }
    else if (op == '*')
        printf("%d", n1 * n2);
}

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[3]);
        char act = argv[2][0];

        do_op(num1, num2, act);
    }
    printf("\n");
    return 0;
}
