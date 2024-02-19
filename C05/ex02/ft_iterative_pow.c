#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;
    while (power > 0)
    {
        result *= nb;
        power--;
    }
    return (power < 0 ? 0 : result);
}

int main(void)
{
    printf("%i", ft_iterative_power(0, 0));
}