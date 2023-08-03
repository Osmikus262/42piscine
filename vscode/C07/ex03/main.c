#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int    main(void)
{
    char *text[4];
    text[0] = "taha";
    text[1] = "martin";
    text[2] = "deneme";
	text[3] = "fatih";


    printf("%s\n", ft_strjoin(4, text, "xx"));
}