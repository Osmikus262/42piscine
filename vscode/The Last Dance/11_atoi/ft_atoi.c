#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-')
        sign = -1;
    i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = ((str[i] - '0') + (result * 10));
        i++;
    }
    return (result * sign);
}

int main()
{
    printf("%d", ft_atoi("   -123asdd"));
}