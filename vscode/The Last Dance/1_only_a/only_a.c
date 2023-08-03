#include <unistd.h>

void only_a(char c)
{
    write(1, &c, 1);
    write(1, "\n", 1);
}

int main()
{
    only_a('a');
}