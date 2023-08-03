#include <unistd.h>
#include "stdio.h"
char ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return i;
}
char *ft_rev_print(char *str)
{
    int len;
    len = ft_strlen(str);

    while(len >= 0)
    {
        write(1,&str[len],1);
        len--;
    }
    return str;
}
int main()
{
    char *c = "mustafa";
    ft_rev_print(c);
}