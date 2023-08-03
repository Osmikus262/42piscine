#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

char *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    i = 0;
    len = ft_strlen(str);

    while(len > i)
    {
        tmp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = tmp;
        i++;
        len--;
    }
    return str;
}

int main()
{
    char str[] = "fatih";
    printf("%s", ft_strrev(str));
}