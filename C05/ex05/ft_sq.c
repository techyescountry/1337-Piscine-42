#include <stdio.h>

int ft_sqrt(int nb)
{
    int i = 1;
    while (i <= nb / i)
    {
        if (i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%i", ft_sqrt(2147483647));
}