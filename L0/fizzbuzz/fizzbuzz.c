#include <unistd.h>

void base_changer(int number)
{
	char	str[10] = "0123456789";
	if (number > 9)
		base_changer(number / 10);
	write (1, &str[number % 10], 1);
}

int main() {
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz",8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 1);
        else base_changer(i);
        write(1, "\n", 1);
    }
    return 0;
}
