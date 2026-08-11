#include <stdio.h>
#include "Libft/libft.h"

int main(void)
{
    char *str;

    str = ft_strdup("Hello from my libft!");

    printf("%s\n", str);

    free(str);

    return (0);
}
