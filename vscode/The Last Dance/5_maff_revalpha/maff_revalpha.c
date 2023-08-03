#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void maff_alpha()
{
    char i;

    i = 90;
    while(i >= 'A' && i <= 'Z')
    {
        if(i%2==1)
        {
            ft_putchar(i + 32);
        }
        else
        {
            ft_putchar(i);
        }
        i--;
    }
}

int main()
{
    maff_alpha();
}