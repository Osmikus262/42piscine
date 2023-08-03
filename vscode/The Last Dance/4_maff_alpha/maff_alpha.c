#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void maff_alpha()
{
    char i;

    i = 97;
    while(i >= 'a' && i <= 'z')
    {
        if(i%2==0)
        {
            ft_putchar(i - 32);
        }
        else
        {
            ft_putchar(i);
        }
        i++;
    }
}

int main()
{
    maff_alpha();
}